# (c) 2023  - 2024 Open Risk (https://www.openriskmanagement.com)
# Tensor Calculations with the Eigen C++ Library (Open Risk Academy Course)
# Course URL: https://www.openriskacademy.com/course/view.php?id=71
# Tested with Eigen 3.4.0 https://gitlab.com/libeigen/eigen/-/releases/3.4.0

cmake_minimum_required(VERSION 3.26)

set(PROJECT_VENDOR "Open Risk (https://www.openriskmanagement.com")
set(PROJECT_CONTACT "info@openrisk.eu")
set(PROJECT_URL "https://github.com/Open-Risk-Academy/Academy-Course-DAT31071")
set(PROJECT_DESCRIPTION "Open Risk Academy Course DAT31071 Exercises")

project(eigen-exercises)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS -std=c++17)
add_definitions("-std=c++17")

set(CMAKE_VERBOSE_MAKEFILE on)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS_DEBUG)
set(CMAKE_PREFIX_PATH cmake-build-debug)

# Catch2 must be installed in the system
find_package(Catch2 REQUIRED)

include_directories(.)

set(SOURCE_FILES
        exercises/step1/eigen_version.cpp
        exercises/step2/tensor_classes.cpp
        exercises/step2/element_access.cpp
        exercises/step2/tensor_dimensions.cpp
        exercises/step3/initialization_set.cpp
        exercises/step3/raw_data_init.cpp
        exercises/step3/symmetries.cpp
        exercises/step3/tensor_setting.cpp
        exercises/step4/tensor_accessing.cpp
        exercises/step4/tensor_print.cpp
        exercises/step4/tensor_reshape.cpp
        exercises/step5/tensor_arithmetic.cpp
        exercises/step5/tensor_resizing.cpp
        exercises/step5/tensor_casting.cpp
        exercises/step6/random_numbers.cpp
        exercises/step6/fixing_seed.cpp
        exercises/step6/custom_generators.cpp
        exercises/step7/check_operations.cpp
        exercises/step7/unary_operations.cpp
        exercises/step7/minus_sign.cpp
        exercises/step7/argmax.cpp
        exercises/step8/tensor_addition.cpp
        exercises/step8/tensor_selections.cpp
        exercises/step8/logical_operations.cpp
        exercises/step8/logical_reductions.cpp
        exercises/step10/tensor_contraction.cpp
        exercises/step10/double_contraction.cpp
        exercises/step10/tensor_chain.cpp
        exercises/step11/tensor_trace.cpp
        exercises/step11/tensor_reductions.cpp
        exercises/step12/tensor_chip.cpp
        exercises/step12/tensor_slice.cpp
        exercises/step12/tensor_stride.cpp
        exercises/step12/tensor_reverse.cpp
        exercises/step12/tensor_concatenate.cpp
        exercises/step12/tensor_pad.cpp
        exercises/step12/tensor_broadcast.cpp
        exercises/step12/tensor_extract.cpp
        exercises/step12/tensor_shuffle.cpp
        exercises/step13/tensor_cumsum.cpp
        exercises/step13/tensor_cumprod.cpp
)

include(Catch)
enable_testing()

add_executable(exercise-tests ${SOURCE_FILES})
catch_discover_tests(exercise-tests)
target_include_directories(exercise-tests PRIVATE ${Catch2_INCLUDE_DIRS})
target_include_directories(exercise-tests PRIVATE ${Eigen3_INCLUDE_DIRS})
target_link_libraries(exercise-tests Catch2::Catch2WithMain)