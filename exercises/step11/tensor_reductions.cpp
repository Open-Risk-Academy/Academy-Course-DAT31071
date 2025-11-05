// (c) 2023 - 2025 Open Risk (https://www.openriskmanagement.com)
// Example Script for the Open Risk Academy Course DAT31071
// Tensor Calculations with the Eigen C++ Library
// https://www.openriskacademy.com/course/view.php?id=71

#include <catch2/catch.hpp>
#include "eigen-3.4.0/Eigen/Dense"
#include "eigen-3.4.0/unsupported/Eigen/CXX11/Tensor"
#include <iostream>

using Eigen::Tensor;

TEST_CASE("Exercise 11.1: Tensor Reductions", "[reductions]") {

    Eigen::Tensor<float, 2> a(2, 3);
    a.setValues({{1,  2, 5},
                 {16, 5, 4}});

    Eigen::array<int, 1> dims({1});

    Eigen::Tensor<float, 1> b1 = a.maximum(dims);
    Eigen::Tensor<float, 1> b2 = a.minimum(dims);
    Eigen::Tensor<float, 1> b3 = a.sum(dims);
    Eigen::Tensor<float, 1> b4 = a.mean(dims);
    Eigen::Tensor<float, 1> b5 = a.prod(dims);

    std::cout << "a" << std::endl << a << std::endl;
    std::cout << "b1" << std::endl << b1 << std::endl;
    std::cout << "b2" << std::endl << b2 << std::endl;
    std::cout << "b3" << std::endl << b3 << std::endl;
    std::cout << "b4" << std::endl << b4 << std::endl;
    std::cout << "b5" << std::endl << b5 << std::endl;

}