<h1 align="center">nxtest</h1>

<p align="center">
  <a href="https://github.com/nicolasjourd1/nxtest/actions/workflows/build.yml"><img src="https://github.com/nicolasjourd1/nxtest/actions/workflows/build.yml/badge.svg" alt="Build"></a>
  <a href="LICENSE"><img src="https://img.shields.io/github/license/nicolasjourd1/nxtest" alt="License"></a>
  <a href="https://en.cppreference.com/w/cpp/23"><img src="https://img.shields.io/badge/C%2B%2B-23-blue.svg" alt="C++23"></a>
  <a href="https://xmake.io"><img src="https://img.shields.io/badge/build-xmake-brightgreen.svg" alt="xmake"></a>
  <a href="#"><img src="https://img.shields.io/badge/platform-linux%20%7C%20windows-lightgrey.svg" alt="Platforms"></a>
</p>

A small testing library for C++23 programs, written as a module.

## Requirements
- A C++23 compliant compiler
- xmake 3.0.0+

## Building

Configure the project and specify the toolchain, e.g clang.
```sh
xmake config [-c] -m <mode> --toolchain=<toolchain>
```

Generate the project for your editor/LSP, e.g compile_commands for clangd.

```sh
xmake project -k <kind>
```

Build the project.
``` sh
xmake build
```

You may then run the example tests.
```sh
xmake run example
```
