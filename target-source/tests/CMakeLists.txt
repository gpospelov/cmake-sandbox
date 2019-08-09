add_executable(unittests src/main.cpp)
target_link_libraries(unittests PRIVATE FancyLib::FancyLib)

# Trick to get access to private API in 'core' directory to unit-test it.
# It looks more like a hack, may be there is a way to achieve the same by putting
# some magic into core/CMakeLists.txt
target_include_directories(unittests PRIVATE ${CMAKE_SOURCE_DIR}/fancylib/core)
