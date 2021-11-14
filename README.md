# C++ Starter Template

A simple starting point for a C++ repository based on CMake and Conan.
Unit tests are setup using gtest.

A static library called `example` is setap as well as a `main` executable using
the poco C++ library (downloaded through conan).

## Requirements

- C++ Compiler (Clang, GCC, XCode, Visual Studio...)
- CMake >= 3.10
- conan >= 1.40.3

## Configuration and building

All these commands should be run from a fresh sub directory (e.g. /build) which is in .gitignore

```
mkdir build
cd build
```

Download and install dependencies with conan

```bash
conan install ..
```

Build all targets and run the tests

```bash
conan build ..
```

You can also use cmake directly to build all or specific targets

```bash
cmake --build .
# or
cmake --build . --target main
```

Run the main executable

```bash
./bin/main
```
