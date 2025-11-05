// (c) 2023 - 2025 Open Risk (https://www.openriskmanagement.com)
// Example Script for the Open Risk Academy Course DAT31071
// Tensor Calculations with the Eigen C++ Library
// https://www.openriskacademy.com/course/view.php?id=71

#include <catch2/catch.hpp>
#include "eigen-3.4.0/Eigen/Dense"
#include "eigen-3.4.0/unsupported/Eigen/CXX11/Tensor"
#include <iostream>

using Eigen::Tensor;

TEST_CASE("Exercise 12.8: Padding Operations", "[shapes]") {

    Eigen::Tensor<int, 2> T(2, 3);
    T.setValues({{0, 1, 2},
                 {3, 4, 5}});
    Eigen::array<std::pair<int, int>, 2> padding_scheme;
    padding_scheme[0] = std::make_pair(1, 2);
    padding_scheme[1] = std::make_pair(0, 0);
    Eigen::Tensor<int, 2> P = T.pad(padding_scheme);
    std::cout << "T" << std::endl << T << std::endl << "P" << std::endl << P << std::endl;

}