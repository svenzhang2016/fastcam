#include "pluginsecond.h"

std::string PluginSecond::command(std::string command, std::string options) {
  return command + " " + options + "second##############################";
}
