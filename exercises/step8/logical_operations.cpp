// (c) 2023 - 2025 Open Risk (https://www.openriskmanagement.com)
// Example Script for the Open Risk Academy Course DAT31071
// Tensor Calculations with the Eigen C++ Library
// https://www.openriskacademy.com/course/view.php?id=71

#include <catch2/catch.hpp>
#include "eigen-3.4.0/Eigen/Dense"
#include "eigen-3.4.0/unsupported/Eigen/CXX11/Tensor"
#include <iostream>

using Eigen::Tensor;

TEST_CASE("Exercise 8.2: Logical Operations", "[binary-operations]") {

    srand((unsigned int) time(0));

    Eigen::Tensor<float, 2> h(3, 3);
    Eigen::Tensor<float, 2> f1(3, 3);
    Eigen::Tensor<float, 2> f2(3, 3);
    Eigen::Tensor<bool, 2> t1(3, 3);
    Eigen::Tensor<bool, 2> t2(3, 3);
    Eigen::Tensor<bool, 2> t3(3, 3);
    Eigen::Tensor<bool, 2> t4(3, 3);

    h.setConstant(0.5);
    f1.setRandom();
    f2.setRandom();

    t1 = f1 > h;
    t2 = f2 > h;

    t3 = t1 && t2;
    t4 = t1 || t2;

    std::cout << "H: " << std::endl << h << std::endl;
    std::cout << "F1: " << std::endl << f1 << std::endl;
    std::cout << "F2: " << std::endl << f2 << std::endl;
    std::cout << "T1: " << std::endl << t1 << std::endl;
    std::cout << "T2: " << std::endl << t2 << std::endl;
    std::cout << "T3: " << std::endl << t3 << std::endl;
    std::cout << "T4: " << std::endl << t4 << std::endl;

}