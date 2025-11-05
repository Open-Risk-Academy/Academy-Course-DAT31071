// (c) 2023 - 2025 Open Risk (https://www.openriskmanagement.com)
// Example Script for the Open Risk Academy Course DAT31071
// Tensor Calculations with the Eigen C++ Library
// https://www.openriskacademy.com/course/view.php?id=71

#include <catch2/catch.hpp>
#include "eigen-3.4.0/Eigen/Dense"
#include "eigen-3.4.0/unsupported/Eigen/CXX11/Tensor"
#include <iostream>

using Eigen::Tensor;

TEST_CASE("Exercise 6.3: Custom Generators", "[random]") {

    Eigen::Tensor<double, 1> u_1d(100);
    Eigen::Tensor<double, 1> n_1d(100);

    u_1d.setRandom<Eigen::internal::UniformRandomGenerator<double>>();
    n_1d.setRandom<Eigen::internal::NormalRandomGenerator<double>>();

    std::cout << u_1d.mean() << std::endl;
    std::cout << u_1d.minimum() << std::endl;
    std::cout << u_1d.maximum() << std::endl;
    std::cout << n_1d.mean() << std::endl;
    std::cout << n_1d.minimum() << std::endl;
    std::cout << n_1d.maximum() << std::endl;

}