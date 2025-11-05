// (c) 2023 - 2025 Open Risk (https://www.openriskmanagement.com)
// Example Script for the Open Risk Academy Course DAT31071
// Tensor Calculations with the Eigen C++ Library
// https://www.openriskacademy.com/course/view.php?id=71

#include <catch2/catch.hpp>
#include "eigen-3.4.0/Eigen/Dense"
#include "eigen-3.4.0/unsupported/Eigen/CXX11/Tensor"
#include <iostream>

using Eigen::Tensor;

TEST_CASE("Exercise 10.1: Tensor Contraction", "[contractions]") {

    Eigen::Tensor<int, 2> A(2, 3);
    Eigen::Tensor<int, 2> B(3, 2);
    A.setValues({{1, 1, 1}, {1, 1, 1}});
    B.setValues({{1, 1}, {2, 2}, {3, 3}});
    Eigen::array<Eigen::IndexPair<int>, 1> product_dims1 = { Eigen::IndexPair<int>(1, 0) };
    Eigen::array<Eigen::IndexPair<int>, 1> product_dims2 = { Eigen::IndexPair<int>(0, 1) };
    Eigen::Tensor<int, 2> AB = A.contract(B, product_dims1);
    Eigen::Tensor<int, 2> BA = A.contract(B, product_dims2);

    std::cout << "A: " << std::endl << A << std::endl;
    std::cout << "B: " << std::endl << B << std::endl;
    std::cout << "AB: " << std::endl << AB << std::endl;
    std::cout << "BA: " << std::endl << BA << std::endl;

}