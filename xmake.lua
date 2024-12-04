add_rules("mode.debug", "mode.release")

target("CPrimerPlus")
    set_kind("binary")
    add_files("src/*.c")

target("test")
    set_kind("binary")
    add_files("src/test.c")

target("Chap2-a")
    set_kind("binary")
    add_files("src/Chap2/a.c")

target("Chap2-c")
    set_kind("binary")
    add_files("src/Chap2/c.c")

target("Chap2-d")
    set_kind("binary")
    add_files("src/Chap2/d.c")

target("Chap2-e")
    set_kind("binary")
    add_files("src/Chap2/e.c")

target("Chap2-f")
    set_kind("binary")
    add_files("src/Chap2/f.c")

target("Chap2-g")
    set_kind("binary")
    add_files("src/Chap2/g.c")

target("Chap2-h")
    set_kind("binary")
    add_files("src/Chap2/h.c")

target("Chap3-b")
    set_kind("binary")
    add_files("src/Chap3/b.c")

target("Chap3-c")
    set_kind("binary")
    add_files("src/Chap3/c.c")

target("Chap3-d")
    set_kind("binary")
    add_files("src/Chap3/d.c")

target("Chap3-e")
    set_kind("binary")
    add_files("src/Chap3/e.c")

target("Chap3-f")
    set_kind("binary")
    add_files("src/Chap3/f.c")

target("Chap3-g")
    set_kind("binary")
    add_files("src/Chap3/g.c")

target("Chap4-a")
    set_kind("binary")
    add_files("src/Chap4/a.c")

target("Chap4-b")
    set_kind("binary")
    add_files("src/Chap4/b.c")

target("Chap4-c")
    set_kind("binary")
    add_files("src/Chap4/c.c")

target("Chap4-d")
    set_kind("binary")
    add_files("src/Chap4/d.c")

target("Chap4-e")
    set_kind("binary")
    add_files("src/Chap4/e.c")

target("Chap4-f")
    set_kind("binary")
    add_files("src/Chap4/f.c")

target("Chap4-g")
    set_kind("binary")
    add_files("src/Chap4/g.c")

target("Chap4-h")
    set_kind("binary")
    add_files("src/Chap4/h.c")

target("Chap5-a")
    set_kind("binary")
    add_files("src/Chap5/a.c")

target("Chap5-b")
    set_kind("binary")
    add_files("src/Chap5/b.c")

target("Chap5-c")
    set_kind("binary")
    add_files("src/Chap5/c.c")

target("Chap5-d")
    set_kind("binary")
    add_files("src/Chap5/d.c")

target("Chap5-e")
    set_kind("binary")
    add_files("src/Chap5/e.c")

target("Chap5-f")
    set_kind("binary")
    add_files("src/Chap5/f.c")

target("Chap5-g")
    set_kind("binary")
    add_files("src/Chap5/g.c")

target("Chap5-h")
    set_kind("binary")
    add_files("src/Chap5/h.c")

target("Chap5-i")
    set_kind("binary")
    add_files("src/Chap5/i.c")

target("Chap6-a")
    set_kind("binary")
    add_files("src/Chap6/a.c")

target("Chap6-b")
    set_kind("binary")
    add_files("src/Chap6/b.c")

target("Chap6-c")
    set_kind("binary")
    add_files("src/Chap6/c.c")

target("Chap6-d")
    set_kind("binary")
    add_files("src/Chap6/d.c")

target("Chap6-e")
    set_kind("binary")
    add_files("src/Chap6/e.c")

target("Chap6-f")
    set_kind("binary")
    add_files("src/Chap6/f.c")

target("Chap6-g")
    set_kind("binary")
    add_files("src/Chap6/g.c")

target("Chap6-h")
    set_kind("binary")
    add_files("src/Chap6/h.c")

target("Chap6-i")
    set_kind("binary")
    add_files("src/Chap6/i.c")

target("Chap6-j")
    set_kind("binary")
    add_files("src/Chap6/j.c")

target("Chap6-k")
    set_kind("binary")
    add_files("src/Chap6/k.c")

target("Chap6-l")
    set_kind("binary")
    add_files("src/Chap6/l.c")

target("Chap6-m")
    set_kind("binary")
    add_files("src/Chap6/m.c")

target("Chap6-n")
    set_kind("binary")
    add_files("src/Chap6/n.c")

target("Chap6-o")
    set_kind("binary")
    add_files("src/Chap6/o.c")

target("Chap6-p")
    set_kind("binary")
    add_files("src/Chap6/p.c")

target("Chap6-q")
    set_kind("binary")
    add_files("src/Chap6/q.c")

target("Chap6-r")
    set_kind("binary")
    add_files("src/Chap6/r.c")
--
-- If you want to known more usage about xmake, please see https://xmake.io
--
-- ## FAQ
--
-- You can enter the project directory firstly before building project.
--
--   $ cd projectdir
--
-- 1. How to build project?
--
--   $ xmake
--
-- 2. How to configure project?
--
--   $ xmake f -p [macosx|linux|iphoneos ..] -a [x86_64|i386|arm64 ..] -m [debug|release]
--
-- 3. Where is the build output directory?
--
--   The default output directory is `./build` and you can configure the output directory.
--
--   $ xmake f -o outputdir
--   $ xmake
--
-- 4. How to run and debug target after building project?
--
--   $ xmake run [targetname]
--   $ xmake run -d [targetname]
--
-- 5. How to install target to the system directory or other output directory?
--
--   $ xmake install
--   $ xmake install -o installdir
--
-- 6. Add some frequently-used compilation flags in xmake.lua
--
-- @code
--    -- add debug and release modes
--    add_rules("mode.debug", "mode.release")
--
--    -- add macro definition
--    add_defines("NDEBUG", "_GNU_SOURCE=1")
--
--    -- set warning all as error
--    set_warnings("all", "error")
--
--    -- set language: c99, c++11
--    set_languages("c99", "c++11")
--
--    -- set optimization: none, faster, fastest, smallest
--    set_optimize("fastest")
--
--    -- add include search directories
--    add_includedirs("/usr/include", "/usr/local/include")
--
--    -- add link libraries and search directories
--    add_links("tbox")
--    add_linkdirs("/usr/local/lib", "/usr/lib")
--
--    -- add system link libraries
--    add_syslinks("z", "pthread")
--
--    -- add compilation and link flags
--    add_cxflags("-stdnolib", "-fno-strict-aliasing")
--    add_ldflags("-L/usr/local/lib", "-lpthread", {force = true})
--
-- @endcode
--

