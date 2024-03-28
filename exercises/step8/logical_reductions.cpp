// (c) 2023  - 2024 Open Risk (https://www.openriskmanagement.com)
// Example Script for the Open Risk Academy Course DAT31071
// Tensor Calculations with the Eigen C++ Library
// https://www.openriskacademy.com/course/view.php?id=71

#include <catch2/catch.hpp>
#include "eigen-3.4.0/Eigen/Dense"
#include "eigen-3.4.0/unsupported/Eigen/CXX11/Tensor"
#include <iostream>

using Eigen::Tensor;

TEST_CASE("Exercise 8.3: Logical Reductions", "[binary-operations]") {

    Eigen::Tensor<int, 1> test(2);
    test(0) = 0;
    test(1) = 1;

    std::cout << "test: " << std::endl << test << std::endl;
    std::cout << "test: " << std::endl << test.size() << std::endl;
    std::cout << "test: " << std::endl << test.dimensions() << std::endl;
    std::cout << "test: " << std::endl << test.dimension(0) << std::endl;
    std::cout << "test.all(): " << std::endl << test.all() << std::endl;
    std::cout << "test.any(): " << std::endl << test.any() << std::endl;
}