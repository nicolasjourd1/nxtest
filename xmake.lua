set_xmakever("3.0.0")

set_project("nxgraph")
set_version("0.1.0")

add_rules("mode.debug", "mode.release")

set_languages("c++23")

target("nxtest")
    set_kind("static")
    add_files("src/*.mpp", {public = true })

target("example")
    set_kind("binary")
    add_deps("nxtest")
    add_files("example/*.cpp")
