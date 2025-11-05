// (c) 2023 - 2025 Open Risk (https://www.openriskmanagement.com)
// Example Script for the Open Risk Academy Course DAT31071
// Tensor Calculations with the Eigen C++ Library
// https://www.openriskacademy.com/course/view.php?id=71

#include <catch2/catch.hpp>
#include "eigen-3.4.0/Eigen/Dense"
#include "eigen-3.4.0/unsupported/Eigen/CXX11/Tensor"
#include <iostream>

using Eigen::Tensor;

TEST_CASE("Exercise 2.1. Tensor Classes (Datatypes)", "[classes]") {

// Scalar
    Tensor<int, 0> t_0d;
    t_0d.setZero();
    std::cout << "T0: " << t_0d << std::endl;

// Vector
    Tensor<float, 1> t_1d(5);
    t_1d.setConstant(1.0);
    std::cout << "T1: " << t_1d << std::endl;

// Matrix
    Tensor<double, 2> t_2d(2, 3);
    t_2d.setRandom();
    std::cout << "T2: " << t_2d << std::endl;

// Cube
    Tensor<std::complex<double>, 3> t_3d(3, 3, 1);
    t_3d.setRandom();
    std::cout << "T3: " << t_3d << std::endl;

// String Tensor
    Tensor<std::string, 1> s_1d(2);
    s_1d.setValues({"Hello", "Eigen World!"});
    std::cout << "S1: " << s_1d << std::endl;

// Char Tensor
    Tensor<char, 2> char_2d(2, 2);
    char_2d.setValues({
                              {'a', 'b'},
                              {'c', 'd'}
                      });
    std::cout << "C2: " << char_2d << std::endl;

// Float Tensor, Rank 6
    Tensor<float, 6> t_6d(2, 2, 2, 2, 2, 2);
    t_6d.setZero();

    REQUIRE(t_0d(0) == 0);
    REQUIRE(t_1d(0) == 1.0);
    REQUIRE(t_2d(1, 1) != 0.0);
    REQUIRE(t_3d(2, 1, 0) != 0.0);
    REQUIRE(char_2d(0, 0) == 97);
    REQUIRE(t_6d(0, 0, 0, 0, 0, 0) == 0.0);

}