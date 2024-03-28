// (c) 2023  - 2024 Open Risk (https://www.openriskmanagement.com)
// Example Script for the Open Risk Academy Course DAT31071
// Tensor Calculations with the Eigen C++ Library
// https://www.openriskacademy.com/course/view.php?id=71

#include <catch2/catch.hpp>
#include "eigen-3.4.0/Eigen/Dense"
#include "eigen-3.4.0/unsupported/Eigen/CXX11/Tensor"
#include <iostream>

using Eigen::Tensor;

TEST_CASE("Exercise 7.3: Check Operations", "[unary-ops]") {

    Eigen::Tensor<int, 2> t_2d(3, 3);
    t_2d.setRandom();
    auto check = t_2d.isfinite();

    std::cout << check << std::endl;
}