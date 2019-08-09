set(test unittests)

include(GoogleTest)

file(GLOB source_files "src/*.cpp")
file(GLOB include_files "src/*.h")

add_executable(${test} ${source_files} ${include_files})
target_link_libraries(${test} PRIVATE FancyLib::FancyLib)


