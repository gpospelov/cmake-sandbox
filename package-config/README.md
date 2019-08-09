# CMake playground: package-config example.

Demonstrates generation of PackageConfig.cmake for later usage in separate project.
Closely follows to [It's time to do CMake right](https://pabloariasal.github.io/2018/02/19/its-time-to-do-cmake-right/).

Project consists of 3 component:
+ Library `fancylib` equipped with local example and unit tests.
+ Example `example` organized as standalone executable which uses `fancylib`.
