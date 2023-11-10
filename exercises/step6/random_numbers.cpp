// (c) 2023  Open Risk (https://www.openriskmanagement.com)
// Example Script for the Open Risk Academy Course DAT31071
// Tensor Calculations with the Eigen C++ Library
// https://www.openriskacademy.com/course/view.php?id=71

#include <catch2/catch.hpp>
#include "eigen-3.4.0/Eigen/Dense"
#include "eigen-3.4.0/unsupported/Eigen/CXX11/Tensor"
#include <iostream>

using Eigen::Tensor;

TEST_CASE("Exercise 6.1: Random Numbers", "[random]") {

    Eigen::Tensor<int, 1> t_1d(3);
    Eigen::Tensor<float, 2> t_2d(3, 3);
    Eigen::Tensor<double, 3> t_3d(3, 3, 3);
    Eigen::Tensor<std::complex<double>, 4> t_4d(3, 3, 3, 3);

    Eigen::Tensor<bool, 1> e_1d(3);
    Eigen::Tensor<std::string, 1> s_1d(3);

    t_1d.setRandom();
    t_2d.setRandom();
    t_3d.setRandom();
    t_4d.setRandom();
    e_1d.setRandom();
    // s_1d.setRandom(); NOT AVAILABLE

    std::cout << e_1d << std::endl;

}