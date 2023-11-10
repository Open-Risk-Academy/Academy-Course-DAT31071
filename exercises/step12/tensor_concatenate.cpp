// (c) 2023  Open Risk (https://www.openriskmanagement.com)
// Example Script for the Open Risk Academy Course DAT31071
// Tensor Calculations with the Eigen C++ Library
// https://www.openriskacademy.com/course/view.php?id=71

#include <catch2/catch.hpp>
#include "eigen-3.4.0/Eigen/Dense"
#include "eigen-3.4.0/unsupported/Eigen/CXX11/Tensor"
#include <iostream>

using Eigen::Tensor;

TEST_CASE("Exercise 12.7: Concatenate", "[shapes]") {

    Tensor<int, 2> left(2, 2);
    Tensor<int, 2> right(3, 2);
    left.setRandom();
    right.setRandom();
    Tensor<int, 2> concat = left.concatenate(right, 1);
    std::cout << "Left Tensor: " << std::endl << left << std::endl;
    std::cout << "Right Tensor: " << std::endl << right << std::endl;
    std::cout << "Concatenated Tensor: " << std::endl << concat << std::endl;

}