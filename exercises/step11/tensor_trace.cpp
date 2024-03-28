// (c) 2023  - 2024 Open Risk (https://www.openriskmanagement.com)
// Example Script for the Open Risk Academy Course DAT31071
// Tensor Calculations with the Eigen C++ Library
// https://www.openriskacademy.com/course/view.php?id=71

#include <catch2/catch.hpp>
#include "eigen-3.4.0/Eigen/Dense"
#include "eigen-3.4.0/unsupported/Eigen/CXX11/Tensor"
#include <iostream>

using Eigen::Tensor;

TEST_CASE("Exercise 11.2: Tensor Trace Operator", "[reductions]") {

    Tensor<float, 3> T1(5, 5, 5);
    T1.setRandom();
    Tensor<float, 0> trace1 = T1.trace();
    std::cout << "T1: " << std::endl << T1 << std::endl;
    std::cout << "T1 Trace: " << std::endl << trace1 << std::endl;

    REQUIRE(trace1.rank() == 0);

    float sum = 0.0f;
    for (int i = 0; i < 5; ++i) {
        sum += T1(i, i, i);
    }
    REQUIRE(trace1() == sum);

    Tensor<float, 3> T2(3, 5, 3);
    T2.setRandom();
    std::array<ptrdiff_t, 2> dims1 = {{0, 2}};
    Tensor<float, 1> trace2 = T2.trace(dims1);
    REQUIRE(trace2.rank() == 1);
    REQUIRE(trace2.dimension(0) == 5);

    float sum2 = 0.0f;
    for (int i = 0; i < 5; ++i) {
        sum2 = 0.0f;
        for (int j = 0; j < 3; ++j) {
            sum2 += T2(j, i, j);
        }
        REQUIRE(trace2(i) == sum2);
    }

}