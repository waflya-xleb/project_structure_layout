set ( CMAKE_CXX_STANDARD 23 )

set ( "${PROJECT}_BINARY_DIR" bin )
set ( "${PROJECT}_SOURCE_DIR" src )
set ( "${PROJECT}_LIBS_DIR" libs )

set ( CMAKE_INCLUDE_PATH ${${PROJECT}_SOURCE_DIR} )
set ( CMAKE_LIBRARY_PATH ${${PROJECT}_LIBS_DIR} )

set ( EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/${${PROJECT}_BINARY_DIR} )
