# CMake playground: fancylib example.

Demonstrates usage of `target_source()` as explained in
[Enhanced source file handling with target_sources()](https://crascit.com/2016/01/31/enhanced-source-file-handling-with-target_sources).

Project consists of 3 component:
+ Library `fancylib`.
+ Unit test executable to test both public/private library API.
+ Demo executable to demonstrate public API usage.

Here we are trying to organize directory structure in such a way,
that `example` sees only headers from `fancylib/public`, while `tests` see both
`fancylib/public` and `fancylib/core`.
