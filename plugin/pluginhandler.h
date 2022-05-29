#include <dlfcn.h>

#include <memory>

#include "iplugin.h"
#include "plugin_global.h"

class PLUGIN_EXPORT PluginHandler {
  std::shared_ptr<IPlugin> (*_load)();
  void* handle;
  char* (*_get_name)();
  char* (*_get_version)();

  std::shared_ptr<IPlugin> instance;

 public:
  PluginHandler(std::string name) {
    handle = dlopen(name.c_str(), RTLD_LAZY);

    _load = (std::shared_ptr<IPlugin>(*)())dlsym(handle, "load");

    _get_name = (char* (*)())dlsym(handle, "name");

    _get_version = (char* (*)())dlsym(handle, "version");
  }

  std::string get_name() { return std::string(_get_name()); }

  std::string get_version() { return std::string(_get_version()); }

  std::shared_ptr<IPlugin> load() {
    if (!instance) {
      instance = _load();
    }
    return instance;
  }
};