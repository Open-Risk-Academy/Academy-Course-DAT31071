// (c) 2023  - 2024 Open Risk (https://www.openriskmanagement.com)
// Example Script for the Open Risk Academy Course DAT31071
// Tensor Calculations with the Eigen C++ Library
// https://www.openriskacademy.com/course/view.php?id=71

#include <catch2/catch.hpp>
#include "eigen-3.4.0/Eigen/Dense"
#include "eigen-3.4.0/unsupported/Eigen/CXX11/Tensor"
#include <iostream>

using Eigen::Tensor;

TEST_CASE("Exercise 4.3: Printing", "[elements-I]") {

    Tensor<int, 1> t_1d(3);
    Tensor<int, 2> t_2d(3, 3);
    Tensor<int, 3> t_3d(3, 3, 3);

    t_1d.setRandom();
    t_2d.setRandom();
    t_3d.setRandom();

    std::cout << t_1d << std::endl;
    std::cout << t_2d << std::endl;
    std::cout << t_3d << std::endl;

    Eigen::array<Eigen::Index, 3> offsets;
    Eigen::array<Eigen::Index, 3> extents;
    for (int k = 0; k < 3; k++) {
        offsets = {0, 0, k};
        extents = {3, 3, 1};
        Tensor<int, 3> slice = t_3d.slice(offsets, extents);
        std::cout << "T Slice: " << std::endl << slice << std::endl;
    }

}