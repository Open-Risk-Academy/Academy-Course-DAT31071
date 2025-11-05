// (c) 2023 - 2025 Open Risk (https://www.openriskmanagement.com)
// Example Script for the Open Risk Academy Course DAT31071
// Tensor Calculations with the Eigen C++ Library
// https://www.openriskacademy.com/course/view.php?id=71

#include <catch2/catch.hpp>
#include "eigen-3.4.0/Eigen/Dense"
#include "eigen-3.4.0/unsupported/Eigen/CXX11/Tensor"
#include <iostream>

using Eigen::Tensor;

TEST_CASE("Exercise 13.2: Cumulative Product", "[scans]") {

    Eigen::Tensor<int, 2> a(2, 3);
    a.setValues({{1, 2, 3},
                 {4, 5, 6}});

    Eigen::Tensor<int, 2> b = a.cumprod(1);

    std::cout << "a" << std::endl << a << std::endl;
    std::cout << "b" << std::endl << b << std::endl;

}