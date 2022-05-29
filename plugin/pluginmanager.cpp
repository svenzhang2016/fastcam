#include "pluginmanager.h"

#include <filesystem>
#include <iostream>
#include <vector>

#include "iplugin.h"

PluginManager::PluginManager() {}

PluginManager::~PluginManager() {
  for (PluginHandler *plugin : pluginList_) {
    delete plugin;
  }
}

void PluginManager::loadPlugin(const std::string &plgPath) {
  if (!pluginList_.empty()) {
    return;
  }
  std::filesystem::directory_iterator pluginDir(plgPath);
  for (auto &pluginFile : pluginDir) {
    std::filesystem::path pluginPath = pluginFile.path();
    std::string ext = pluginPath.extension();
    if (ext.find(".so") != std::string::npos) {
      pluginList_.push_back(new PluginHandler(pluginPath));
    }
  }
}
