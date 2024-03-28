// (c) 2023  - 2024 Open Risk (https://www.openriskmanagement.com)
// Example Script for the Open Risk Academy Course DAT31071
// Tensor Calculations with the Eigen C++ Library
// https://www.openriskacademy.com/course/view.php?id=71

#include <catch2/catch.hpp>
#include "eigen-3.4.0/Eigen/Dense"
#include "eigen-3.4.0/unsupported/Eigen/CXX11/Tensor"
#include <iostream>

using Eigen::Tensor;

TEST_CASE("Exercise 6.2: Fixing the Seed", "[random]") {

    srand((unsigned int) time(0));
    Eigen::Tensor<float, 2> t_2d(3, 3);
    for (int c=0; c<5; c++){
        t_2d.setRandom();
        std::cout << t_2d(0,0) << std::endl;
    }

}