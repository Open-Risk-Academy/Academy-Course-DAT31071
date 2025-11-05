// (c) 2023 - 2025 Open Risk (https://www.openriskmanagement.com)
// Example Script for the Open Risk Academy Course DAT31071
// Tensor Calculations with the Eigen C++ Library
// https://www.openriskacademy.com/course/view.php?id=71

#include <catch2/catch.hpp>
#include "eigen-3.4.0/Eigen/Dense"
#include "eigen-3.4.0/unsupported/Eigen/CXX11/Tensor"
#include <iostream>

using Eigen::Tensor;

TEST_CASE("Exercise 4.1: Accessing Tensor Values", "[elements-I]") {

    Eigen::Tensor<float, 3> T;
    T.resize(3,3,3);
    T.setRandom();
    int size = T.size();
    float* T_data = T.data();
    for (int i = 0; i < size; i++) {
        std::cout << "Value of " << i << " T[" << i << "] is " << *(T_data + i) << " at address " << T_data + i << std::endl;
    }
}