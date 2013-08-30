project(tests)

set(FAS_TESTING_CPP "${CMAKE_SOURCE_DIR}/fas/testing/testing.cpp")

add_subdirectory(static_check)
add_subdirectory(integral)
add_subdirectory(typemanip)
add_subdirectory(type_list)
add_subdirectory(mp)
add_subdirectory(algorithm)
add_subdirectory(hierarchy)
add_subdirectory(aop)
add_subdirectory(xtime)
add_subdirectory(testing)
add_subdirectory(range)