from conans import ConanFile, CMake

class CppStarterConan(ConanFile):
   settings = "os", "compiler", "build_type", "arch"
   requires = ["gtest/1.11.0", "poco/1.9.4"]
   generators = "cmake", "cmake-find-package"
   default_options = {}

   def imports(self):
      self.copy("*.so", "bin", "lib")
      self.copy("*.dll", "bin", "bin")
      self.copy("*.dylib", "bin", "lib")

   def build(self):
      cmake = CMake(self)
      cmake.configure()
      cmake.build()
      cmake.test()

