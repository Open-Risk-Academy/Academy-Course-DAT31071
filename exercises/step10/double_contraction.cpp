// (c) 2023  - 2024 Open Risk (https://www.openriskmanagement.com)
// Example Script for the Open Risk Academy Course DAT31071
// Tensor Calculations with the Eigen C++ Library
// https://www.openriskacademy.com/course/view.php?id=71

#include <catch2/catch.hpp>
#include "eigen-3.4.0/Eigen/Dense"
#include "eigen-3.4.0/unsupported/Eigen/CXX11/Tensor"
#include <iostream>

using Eigen::Tensor;

TEST_CASE("Exercise 10.2: Double Contraction", "[contractions]") {

    Eigen::Tensor<int, 2> A(3, 3);
    A.setValues({{1, 0, 1},
                 {0, 1, 1},
                 {1, 1, 0}});

    Eigen::array<Eigen::IndexPair<int>, 2> double_contraction = {Eigen::IndexPair<int>(0, 0),
                                                                 Eigen::IndexPair<int>(1, 1)};

    Eigen::Tensor<int, 0> AA = A.contract(A, double_contraction);

    std::cout << "A: " << std::endl << A << std::endl;
    std::cout << "AA: " << std::endl << AA << std::endl;

    Eigen::array<Eigen::IndexPair<int>, 2> double_contraction2 = {Eigen::IndexPair<int>(0, 1), Eigen::IndexPair<int>(1, 0)};

    Eigen::Tensor<int, 0> AAp = A.contract(A, double_contraction2);
    std::cout << "AAp: " << std::endl << AAp << std::endl;

}