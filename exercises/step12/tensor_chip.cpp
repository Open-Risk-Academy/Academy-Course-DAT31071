// (c) 2023  Open Risk (https://www.openriskmanagement.com)
// Example Script for the Open Risk Academy Course DAT31071
// Tensor Calculations with the Eigen C++ Library
// https://www.openriskacademy.com/course/view.php?id=71

#include <catch2/catch.hpp>
#include "eigen-3.4.0/Eigen/Dense"
#include "eigen-3.4.0/unsupported/Eigen/CXX11/Tensor"
#include <iostream>

using Eigen::Tensor;

TEST_CASE("Exercise 12.2: Chip", "[shapes]") {

    Tensor<int, 3> t_3d(3, 3, 3);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                t_3d(i, j, k) = i + j * 3 + k * 9;
            }
        }
    }

    std::cout << t_3d << std::endl;

    Tensor<int, 2> chip;
    chip = t_3d.chip(0, 2);
    std::cout << chip << std::endl;
    chip = t_3d.chip(1, 2);
    std::cout << chip << std::endl;

}