// (c) 2023  - 2024 Open Risk (https://www.openriskmanagement.com)
// Example Script for the Open Risk Academy Course DAT31071
// Tensor Calculations with the Eigen C++ Library
// https://www.openriskacademy.com/course/view.php?id=71

#include <catch2/catch.hpp>
#include "eigen-3.4.0/Eigen/Dense"
#include "eigen-3.4.0/unsupported/Eigen/CXX11/Tensor"
#include <iostream>

using Eigen::Tensor;

TEST_CASE("Exercise 5.2: Tensor Resizing", "[elements-II]") {

    Tensor<double, 2> J(2,2);
    std::cout << "J size: " << J.size() << std::endl;
    std::cout << "J Empty: " << J << std::endl;
    J.setConstant(1.0);
    std::cout << "J Filled: " << J << std::endl;
    J.resize(3,3);
    std::cout << "J size: " << J.size() << std::endl;
    std::cout << "J : " << J << std::endl;
}