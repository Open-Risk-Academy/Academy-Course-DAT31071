// (c) 2023  - 2024 Open Risk (https://www.openriskmanagement.com)
// Example Script for the Open Risk Academy Course DAT31071
// Tensor Calculations with the Eigen C++ Library
// https://www.openriskacademy.com/course/view.php?id=71

#include <catch2/catch.hpp>
#include "eigen-3.4.0/Eigen/Dense"
#include "eigen-3.4.0/unsupported/Eigen/CXX11/Tensor"
#include <iostream>

using Eigen::Tensor;

TEST_CASE("Exercise 4.2: Reshape Tensor", "[elements-I]") {

    Tensor<float, 1> input(125);
    std::iota(input.data(), input.data() + input.size(), 1);
    std::array<int, 3> dims{{5, 5, 5}};
    Tensor<float, 3> result = input.reshape(dims);
    REQUIRE(result(4,4,4) == 125);
}