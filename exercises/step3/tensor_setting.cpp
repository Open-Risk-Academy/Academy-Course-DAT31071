// (c) 2023  Open Risk (https://www.openriskmanagement.com)
// Example Script for the Open Risk Academy Course DAT31071
// Tensor Calculations with the Eigen C++ Library
// https://www.openriskacademy.com/course/view.php?id=71

#include <catch2/catch.hpp>
#include "eigen-3.4.0/Eigen/Dense"
#include "eigen-3.4.0/unsupported/Eigen/CXX11/Tensor"
#include <iostream>

using Eigen::Tensor;

TEST_CASE("Exercise 3.4: Setting", "[initialization]") {

    Eigen::Tensor<int, 1> t_1d(3);
    Eigen::Tensor<int, 2> t_2d(3, 3);
    Eigen::Tensor<int, 3> t_3d(3, 3, 3);

    for (int k = 0; k < 3; k++) {
        t_1d(k) = k;
    }

    for (int j = 0; j < 3; j++) {
        for (int k = 0; k < 3; k++) {
            t_2d(j, k) = j * 3 + k;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                t_3d(i, j, k) = k * 9 + j * 3 + i;
            }
        }
    }

    std::cout << t_3d << std::endl;
    REQUIRE(t_3d(1,1,1) == 13);

}