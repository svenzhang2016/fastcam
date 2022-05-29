#include <gtest/gtest.h>

#include <string>

#include "iplugin.h"

class SimplePlugin : IPlugin {
 public:
  virtual std::string command(std::string command, std::string options) {
    return command + " " + options;
  }
};
DEFINE_PLUGIN(SimplePlugin, "Simple Plugin", "0.0.1")

TEST(simpleplugin, command) {
  SimplePlugin sp;
  GTEST_ASSERT_EQ(sp.command("Simple", "Plugin"), "Simple Plugin");
}

int main(int argc, char* argv[]) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}