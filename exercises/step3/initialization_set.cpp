// (c) 2023  Open Risk (https://www.openriskmanagement.com)
// Example Script for the Open Risk Academy Course DAT31071
// Tensor Calculations with the Eigen C++ Library
// https://www.openriskacademy.com/course/view.php?id=71

#include <catch2/catch.hpp>
#include "eigen-3.4.0/Eigen/Dense"
#include "eigen-3.4.0/unsupported/Eigen/CXX11/Tensor"
#include <iostream>

using Eigen::Tensor;

TEST_CASE("Exercise 3.1. Initialization", "[initialization]") {

    Tensor<int, 2> M(4, 3);
    M.setValues({
                        {0,   100,  200},
                        {300, 400,  500},
                        {600, 700,  800},
                        {900, 1000, 1100}
                });

    std::cout << "M: " << std::endl << M << std::endl;

    Tensor<float, 2> F(2, 2);
    F.setValues({
                        {0.0f, 1.0f},
                        {8.88888888f, 10.0f}
                });

    Tensor<double, 2> D(2, 2);
    D.setValues({
                        {0.0, 1.0},
                        {8.88888888, 10.0}
                });


    REQUIRE(F(1,0) == D(1,0));
}