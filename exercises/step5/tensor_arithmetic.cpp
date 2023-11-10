// (c) 2023  Open Risk (https://www.openriskmanagement.com)
// Example Script for the Open Risk Academy Course DAT31071
// Tensor Calculations with the Eigen C++ Library
// https://www.openriskacademy.com/course/view.php?id=71

#include <catch2/catch.hpp>
#include "eigen-3.4.0/Eigen/Dense"
#include "eigen-3.4.0/unsupported/Eigen/CXX11/Tensor"
#include <iostream>

using Eigen::Tensor;

TEST_CASE("Exercise 5.1: Arithmetic", "[elements-II]") {

    Tensor<float, 2> t_2d(3, 3);
    t_2d.setConstant(1.0);

    Tensor<float, 2> s_2d = t_2d + 2.0f;
    Tensor<float, 2> q_2d = t_2d * 2.0f;

    std::cout << s_2d << std::endl;
    std::cout << q_2d << std::endl;

}