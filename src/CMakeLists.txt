set(SOURCES
        Sin.cpp
        Sin.h)
add_library(Sin ${SOURCES})
target_include_directories(Sin PUBLIC ${SRC_ROOT_DIR})
source_group(TREE ${CMAKE_CURRENT_LIST_DIR} FILES ${SOURCES})
add_subdirectory(tests)
