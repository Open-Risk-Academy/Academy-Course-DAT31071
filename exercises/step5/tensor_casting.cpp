// (c) 2023 - 2025 Open Risk (https://www.openriskmanagement.com)
// Example Script for the Open Risk Academy Course DAT31071
// Tensor Calculations with the Eigen C++ Library
// https://www.openriskacademy.com/course/view.php?id=71#include <catch2/catch.hpp>

#include <catch2/catch.hpp>
#include "eigen-3.4.0/Eigen/Dense"
#include "eigen-3.4.0/unsupported/Eigen/CXX11/Tensor"
#include <iostream>

using Eigen::Tensor;

TEST_CASE("Exercise 5.3: Casting Datatypes", "[elements-II]") {

    Tensor<std::complex<double>, 2> c_2d(3, 3);
    c_2d.setConstant(std::complex<double>(1, 0));
    std::cout << c_2d << std::endl;

    Tensor<double, 2> d_2d = c_2d.real();
    std::cout << d_2d << std::endl;

    Tensor<float, 2> f_2d = d_2d.cast<float>();
    std::cout << f_2d << std::endl;

    REQUIRE(c_2d(0, 0).real() == f_2d(0, 0));

}