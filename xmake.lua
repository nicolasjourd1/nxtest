set_xmakever("3.0.0")

set_project("nxtest")
set_languages("c++23")
set_version("0.1.0")

add_rules("mode.debug", "mode.release")


if is_plat("windows") then
    set_toolchains("msvc")
else
    add_rules("plugin.compile_commands.autoupdate", {outputdir = ".", lsp = "clangd"})

    set_toolchains("clang")
    set_runtimes("c++_shared")
end

set_policy("build.c++.modules", true)

target("nxtest")
    set_kind("static")
    add_files("src/*.mpp", {public = true })

target("example")
    set_kind("binary")
    add_deps("nxtest")
    add_files("example/*.cpp")
