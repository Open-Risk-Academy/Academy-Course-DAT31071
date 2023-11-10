// (c) 2023  Open Risk (https://www.openriskmanagement.com)
// Example Script for the Open Risk Academy Course DAT31071
// Tensor Calculations with the Eigen C++ Library
// https://www.openriskacademy.com/course/view.php?id=71

#include <catch2/catch.hpp>
#include "eigen-3.4.0/Eigen/Dense"
#include "eigen-3.4.0/unsupported/Eigen/CXX11/Tensor"
#include <iostream>

using Eigen::Tensor;

TEST_CASE("Exercise 12.1: Shuffle", "[shapes]") {

    Tensor<float, 3> input(3,3,3);
    input.setRandom();

    std::array<int, 3> shuffle_scheme;
    shuffle_scheme[0] = 2;
    shuffle_scheme[1] = 1;
    shuffle_scheme[2] = 0;
    Tensor<float, 3> output;
    output = input.shuffle(shuffle_scheme);

    std::cout << "input" << std::endl << input << std::endl;
    std::cout << "output" << std::endl << output << std::endl;

    for (int i = 0; i<input.dimension(0); i++) {
        for (int j = 0; j<input.dimension(2); j++) {
            REQUIRE(input(i, 0, j) == output(j, 0, i) );
        }
    }
}