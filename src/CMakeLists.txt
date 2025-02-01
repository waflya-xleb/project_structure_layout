set ( "${PROJECT}_VERSION_GENERATION" 0 )
set ( "${PROJECT}_VERSION_BRANCH" 0 )
set ( "${PROJECT}_VERSION_RELEASE" 0 )
set ( "${PROJECT}_VERSION_BETA" 0 )
set ( "${PROJECT}_VERSION" ${${PROJECT}_VERSION_GENERATION}.${${PROJECT}_VERSION_BRANCH}.${${PROJECT}_VERSION_RELEASE}.${${PROJECT}_VERSION_BETA} )

message( STATUS ${${PROJECT}_VERSION} )

set ( EXECUTABLE-NAME "program-name" )

include_directories(lib_foo)
include_directories(just_foo)

add_executable( ${EXECUTABLE-NAME} main.cpp utils/utils.cpp just_foo/just_foo.cpp )

add_library( foo STATIC lib_foo/foo.cpp )

target_link_libraries( ${EXECUTABLE-NAME} PRIVATE foo )

set_target_properties( ${EXECUTABLE-NAME} PROPERTIES VERSION "${${PROJECT}_VERSION}" SOVERSION "0" )

