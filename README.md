<h1 align="center">nxtest</h1>

<p align="center">
  <a href="https://github.com/nicolasjourd1/nxtest/actions/workflows/build.yml"><img src="https://github.com/nicolasjourd1/nxtest/actions/workflows/build.yml/badge.svg" alt="Build"></a>
  <a href="LICENSE"><img src="https://img.shields.io/github/license/nicolasjourd1/nxtest" alt="License"></a>
  <a href="https://en.cppreference.com/w/cpp/23"><img src="https://img.shields.io/badge/C%2B%2B-23-blue.svg" alt="C++23"></a>
  <a href="https://xmake.io"><img src="https://img.shields.io/badge/build-xmake-brightgreen.svg" alt="xmake"></a>
  <a href="#"><img src="https://img.shields.io/badge/platform-linux%20%7C%20windows-lightgrey.svg" alt="Platforms"></a>
</p>

A small testing library for C++23 programs, written as a module.

<p align="center">
    <a href="#requirements">Requirements</a>
    <a>◇</a>
    <a href="#building">Building</a>
    <a>◇</a>
    <a href="#usage">Usage</a>
    <a>◇</a>
    <a href=#license>License</a>
</p>

## Requirements

[xmake](https://xmake.io) 3.0.0 or newer and a C++23 compliant compiler with module support, ideally a recent one.

Module support still varies a lot between toolchains, which is why the toolchain is specified explicitly per platform, rather than left to auto-detection. See below.

| Platform | Compiler | Standard Library |
| -------- | -------- | ---------------- |
| Linux    | clang    | libc++           |
| Windows  | MSVC     | MSVC STL         |

On Linux, make sure libc++ is installed alongside clang, e.g. `libc++` and `libc++abi` on Arch, `libc++-dev` and `libc++abi-dev` on Debian/Ubuntu.

## Building

```sh
xmake f -c -m release # or -m debug
xmake build
```

Run the example:

```sh
xmake run example
```

## Usage

```C++
import nxtest;

// TODO

```

## Contributing

Any contribution is more than welcomed.

## License

Distributed under the MIT license. See [`LICENSE`](LICENSE).
