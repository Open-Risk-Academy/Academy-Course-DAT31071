// (c) 2023  - 2024 Open Risk (https://www.openriskmanagement.com)
// Example Script for the Open Risk Academy Course DAT31071
// Tensor Calculations with the Eigen C++ Library
// https://www.openriskacademy.com/course/view.php?id=71

#include <catch2/catch.hpp>
#include "eigen-3.4.0/Eigen/Dense"
#include "eigen-3.4.0/unsupported/Eigen/CXX11/Tensor"
#include <iostream>

using Eigen::Tensor;

TEST_CASE("Exercise 7.4: ArgMax", "[unary-ops]") {

    Tensor<float, 3> T(3,3,3);
    T.setRandom();
    std::cout << T << std::endl;
    Tensor<Eigen::DenseIndex, 0> T_argmax;
    T_argmax = T.argmax();
    std::cout << T_argmax << std::endl;
    T(0,0, 0) = 100.0;
    T_argmax = T.argmax();
    std::cout << T_argmax << std::endl;
    T(2,2, 2) = 200.0;
    T_argmax = T.argmax();
    std::cout << T_argmax << std::endl;
    int maxindex =  T_argmax(0);
    Tensor<float, 0> maxi = T.maximum();
    std::cout << maxi() << std::endl;

    float* T_data = T.data();
    float maxvalue = *(T_data + maxindex);
    std::cout << maxvalue << std::endl;

    REQUIRE(maxvalue == maxi());

}