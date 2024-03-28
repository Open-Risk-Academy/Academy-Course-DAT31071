// (c) 2023  - 2024 Open Risk (https://www.openriskmanagement.com)
// Example Script for the Open Risk Academy Course DAT31071
// Tensor Calculations with the Eigen C++ Library
// https://www.openriskacademy.com/course/view.php?id=71

#include <catch2/catch.hpp>
#include "eigen-3.4.0/Eigen/Dense"
#include "eigen-3.4.0/unsupported/Eigen/CXX11/Tensor"
#include "eigen-3.4.0/unsupported/Eigen/CXX11/TensorSymmetry"
#include <iostream>

using Eigen::Tensor;

TEST_CASE("Exercise 3.2. Tensor Symmetries", "[initialization]") {

    Eigen::SGroup<Eigen::AntiSymmetry<0,1>> simple;
    Tensor<int, 2> eps(3,3);
    eps.setZero();
    simple(eps, 0, 1) = 1;
    simple(eps, 1, 2) = 1;

    std::cout << "E2: " << std::endl << eps << std::endl;

    Eigen::SGroup<Eigen::AntiSymmetry<0,1>, Eigen::AntiSymmetry<1,2>> symmetry;
    Tensor<int, 3> epsilon(3,3,3);

    epsilon.setZero();
    symmetry(epsilon, 0, 1, 2) = 1;
    std::cout << "E3: " << std::endl << epsilon << std::endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                REQUIRE(epsilon(i,j,k) == (- (j - i) * (k - j) * (i - k) / 2) );
            }
        }
    }
}
