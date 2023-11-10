// (c) 2023  Open Risk (https://www.openriskmanagement.com)
// Example Script for the Open Risk Academy Course DAT31071
// Tensor Calculations with the Eigen C++ Library
// https://www.openriskacademy.com/course/view.php?id=71

#include <catch2/catch.hpp>
#include "eigen-3.4.0/Eigen/Dense"
#include "eigen-3.4.0/unsupported/Eigen/CXX11/Tensor"
#include <iostream>

using Eigen::Tensor;

TEST_CASE("Exercise 2.3. Element Access", "[classes]") {

    Tensor<double, 3> t_3d(3, 3, 3);
    t_3d.setZero();
    t_3d(1, 1, 1) = 1.0;

    REQUIRE(t_3d(1, 1, 1) == 1.0);

}