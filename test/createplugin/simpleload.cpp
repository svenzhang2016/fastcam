#include <dirent.h>

#include <iostream>
#include <vector>

#include "pluginmanager.h"

int main(int argc, char *argv[]) {
  PluginManager manager;
  manager.loadPlugin("/home/sven/project/fastcam/build/test/createplugin");

  for (auto ph : manager.pluginList()) {
    auto plugin = ph->load();
    std::cerr << "Auto loaded plugin: " << ph->get_name()
              << ", version: " << ph->get_version() << std::endl;
    std::cerr << "Running plugins command method: " << std::endl;
    std::cerr << plugin->command("Command here", "options here") << std::endl;
  }
  return 0;
}