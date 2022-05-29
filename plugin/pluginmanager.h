#ifndef __PLUGINMANAGER_H__
#define __PLUGINMANAGER_H__

#include <filesystem>
#include <vector>

#include "pluginhandler.h"

class PLUGIN_EXPORT PluginManager {
 public:
  PluginManager();
  ~PluginManager();

  void loadPlugin(const std::string &plgPath);

  const std::vector<PluginHandler *> &pluginList() const { return pluginList_; }
  std::vector<PluginHandler *> pluginList() { return pluginList_; }

 private:
  std::vector<PluginHandler *> pluginList_;
};

#endif  // __PLUGINMANAGER_H__