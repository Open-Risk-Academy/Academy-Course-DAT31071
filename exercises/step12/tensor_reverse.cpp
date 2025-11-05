// (c) 2023 - 2025 Open Risk (https://www.openriskmanagement.com)
// Example Script for the Open Risk Academy Course DAT31071
// Tensor Calculations with the Eigen C++ Library
// https://www.openriskacademy.com/course/view.php?id=71

#include <catch2/catch.hpp>
#include "eigen-3.4.0/Eigen/Dense"
#include "eigen-3.4.0/unsupported/Eigen/CXX11/Tensor"
#include <iostream>

using Eigen::Tensor;

TEST_CASE("Exercise 12.5: Reverse", "[shapes]") {

    Eigen::Tensor<int, 2> T(4, 3);
    T.setValues({{0,   100,  200},
                 {300, 400,  500},
                 {600, 700,  800},
                 {900, 1000, 1100}});
    Eigen::array<bool, 2> reverse({true, false});
    Eigen::Tensor<int, 2> R = T.reverse(reverse);
    std::cout << "T: " << std::endl << T << std::endl;
    std::cout << "R: " << std::endl << R << std::endl;

    for (int i = 0; i < T.dimension(0); i++) {
        for (int j = 0; j < T.dimension(1); j++) {
            REQUIRE(T(i, j) == R(R.dimension(0) - 1 - i, j));
        }
    }
}