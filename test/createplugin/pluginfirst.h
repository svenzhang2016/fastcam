#ifndef __PLUGINFIRST_H__
#define __PLUGINFIRST_H__

#include "iplugin.h"

class PluginFirst : IPlugin {
 public:
  virtual std::string command(std::string command,
                              std::string options) override;
};
DEFINE_PLUGIN(PluginFirst, "Plugin First", "0.0.1")

#endif  // __PLUGINFIRST_H__