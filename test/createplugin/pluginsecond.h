#ifndef __PLUGINSECOND_H__
#define __PLUGINSECOND_H__

#include "iplugin.h"

class PluginSecond : IPlugin {
 public:
  virtual std::string command(std::string command,
                              std::string options) override;
};
DEFINE_PLUGIN(PluginSecond, "Plugin Second", "0.0.1")

#endif  // __PLUGINSECOND_H__