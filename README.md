# nxtest

A small testing library for C++23 programs, written as a module.

## Requirements
- A C++23 compliant compiler
- xmake 3.0.0+

## Building

Configure the project and specify the toolchain, e.g clang.
```sh
xmake config [c] -m <mode> --toolchain=<toolchain>
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
