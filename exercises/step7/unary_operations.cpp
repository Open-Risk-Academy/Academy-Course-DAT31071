// (c) 2023  - 2024 Open Risk (https://www.openriskmanagement.com)
// Example Script for the Open Risk Academy Course DAT31071
// Tensor Calculations with the Eigen C++ Library
// https://www.openriskacademy.com/course/view.php?id=71

#include <catch2/catch.hpp>
#include "eigen-3.4.0/Eigen/Dense"
#include "eigen-3.4.0/unsupported/Eigen/CXX11/Tensor"
#include <iostream>

using Eigen::Tensor;

TEST_CASE("Exercise 7.2: Unary Operations", "[unary-ops]") {

    Eigen::Tensor<float, 1> u_1d(100);
    u_1d.setRandom<Eigen::internal::UniformRandomGenerator<float>>();
    Eigen::Tensor<float, 1> sum = u_1d.unaryExpr(&sinf32).square()
            + u_1d.unaryExpr(&cosf32).square();

    std::cout << sum << std::endl;

}