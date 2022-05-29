#ifndef IPLUGIN_H_
#define IPLUGIN_H_

#include <memory>
#include <string>

#include "plugin_global.h"

class PLUGIN_EXPORT IPlugin {
 public:
  IPlugin() {}
  virtual ~IPlugin() {}
  virtual std::string command(std::string command, std::string option) {
    return "";
  }
};

#define DEFINE_PLUGIN(classType, pluginName, pluginVersion)                   \
  extern "C" {                                                                \
  std::shared_ptr<classType> load() { return std::make_shared<classType>(); } \
  const char* name() { return pluginName; }                                   \
  const char* version() { return pluginVersion; }                             \
  }

#endif