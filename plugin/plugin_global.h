#ifndef __PLUGIN_GLOBAL_H__
#define __PLUGIN_GLOBAL_H__

#ifdef _WIN32
#if defined(PLUGIN_LIB)
#define PLUGIN_EXPORT __declspec(dllexport)
#else
#define PLUGIN_IMPORT __declspec(dllimport)
#endif
#else
#define PLUGIN_EXPORT
#endif
#endif  // __PLUGIN_GLOBAL_H__