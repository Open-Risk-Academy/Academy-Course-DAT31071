// (c) 2023  Open Risk (https://www.openriskmanagement.com)
// Example Script for the Open Risk Academy Course DAT31071
// Tensor Calculations with the Eigen C++ Library
// https://www.openriskacademy.com/course/view.php?id=71

#include <catch2/catch.hpp>
#include "eigen-3.4.0/Eigen/Dense"
#include "eigen-3.4.0/unsupported/Eigen/CXX11/Tensor"
#include <iostream>

using Eigen::Tensor;

TEST_CASE("Exercise 12.4: Stride", "[shapes]") {

    Eigen::Tensor<int, 2> T(4, 4);
    T.setValues({{0,  1,  2,  3},
                 {4,  5,  6,  7},
                 {8,  9,  10, 11},
                 {12, 13, 14, 15}});
    // Eigen::array<Eigen::DenseIndex, 2> stride_scheme({1, 1});
    Eigen::array<Eigen::DenseIndex, 2> stride_scheme({3, 3});
    Eigen::Tensor<int, 2> S = T.stride(stride_scheme);

    std::cout << "T: " << std::endl << T << std::endl;
    std::cout << "S: " << std::endl << S << std::endl;
}