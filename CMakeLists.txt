cmake_minimum_required (VERSION 3.25)

project(cad_test)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

file(GLOB source_list "${PROJECT_SOURCE_DIR}/src/cpp/*.cpp" "${PROJECT_SOURCE_DIR}/src/headers/*.h" )

add_executable(cad_test
    ${source_list}
)

set_target_properties (cad_test PROPERTIES
    CXX_STANDARD 20
    CXX_EXTENSIONS OFF
)

target_compile_features (cad_test PRIVATE cxx_std_20)
