// (c) 2023  - 2024 Open Risk (https://www.openriskmanagement.com)
// Example Script for the Open Risk Academy Course DAT31071
// Tensor Calculations with the Eigen C++ Library
// https://www.openriskacademy.com/course/view.php?id=71

#include <catch2/catch.hpp>
#include "eigen-3.4.0/Eigen/Dense"
#include "eigen-3.4.0/unsupported/Eigen/CXX11/Tensor"
#include <iostream>

using Eigen::Tensor;

TEST_CASE("Exercise 8.1: Binary Arithmetic", "[binary-operations]") {

Eigen::Tensor<float, 2> t1(3, 3);
Eigen::Tensor<float, 2> t2(3, 3);
Eigen::Tensor<float, 2> t3(3, 3);
Eigen::Tensor<float, 2> t4(3, 3);
Eigen::Tensor<float, 2> t5(3, 3);
Eigen::Tensor<float, 2> t6(3, 3);

for (int j = 0; j< 3; j++) {
    for (int k = 0; k< 3; k++) {
        t1(j, k) = j * 3 + k + 1;
    }
}

for (int j = 0; j< 3; j++) {
    for (int k = 0; k< 3; k++) {
        t2(j, k) = k * 3 + j + 1;
    }
}

t3 = t1 + t2;
t4 = t1 - t2;
t5 = t1 / t2;
t6 = t1 * t2;

std::cout << "T1: " << std::endl << t1 << std::endl;
std::cout << "T2: " << std::endl << t2 << std::endl;
std::cout << "T3: " << std::endl << t3 << std::endl;
std::cout << "T4: " << std::endl << t4 << std::endl;
std::cout << "T5: " << std::endl << t5 << std::endl;
std::cout << "T6: " << std::endl << t6 << std::endl;

}