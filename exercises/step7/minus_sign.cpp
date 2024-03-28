// (c) 2023  - 2024 Open Risk (https://www.openriskmanagement.com)
// Example Script for the Open Risk Academy Course DAT31071
// Tensor Calculations with the Eigen C++ Library
// https://www.openriskacademy.com/course/view.php?id=71

#include <catch2/catch.hpp>
#include "eigen-3.4.0/Eigen/Dense"
#include "eigen-3.4.0/unsupported/Eigen/CXX11/Tensor"
#include <iostream>

using Eigen::Tensor;

TEST_CASE("Exercise 7.1: Minus Operator", "[unary-ops]") {


    Eigen::Tensor<float, 2> t_float(3, 3);
    Eigen::Tensor<int, 2> t_int(3, 3);
    Eigen::Tensor<bool, 2> t_bool(3, 3);

    t_float.setConstant(1.0);
    t_int.setConstant(1);
    t_bool.setConstant(true);
    std::cout << t_float << std::endl;
    std::cout << t_int << std::endl;
    std::cout << t_bool << std::endl;


    Eigen::Tensor<float, 2> x1 = - t_float;
    Eigen::Tensor<int, 2> x2 = - t_int;
    Eigen::Tensor<bool, 2> x3 = - t_bool;
    std::cout << x1 << std::endl;
    std::cout << x2 << std::endl;
    std::cout << x3 << std::endl;
}