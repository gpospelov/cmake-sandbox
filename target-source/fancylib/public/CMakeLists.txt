target_sources(fancylib
    PRIVATE
    fancyutils.h
)

target_include_directories(fancylib
    PUBLIC
        $<INSTALL_INTERFACE:public>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}>
)
