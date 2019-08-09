set(library_name fancylib)

add_library(${library_name} SHARED "")

# Add an alias so that library can be used inside the build tree, e.g. when testing
add_library(FancyLib::FancyLib ALIAS ${library_name})

add_subdirectory(public)
add_subdirectory(core)
