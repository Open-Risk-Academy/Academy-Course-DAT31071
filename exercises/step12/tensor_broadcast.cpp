// (c) 2023  - 2024 Open Risk (https://www.openriskmanagement.com)
// Example Script for the Open Risk Academy Course DAT31071
// Tensor Calculations with the Eigen C++ Library
// https://www.openriskacademy.com/course/view.php?id=71

#include <catch2/catch.hpp>
#include "eigen-3.4.0/Eigen/Dense"
#include "eigen-3.4.0/unsupported/Eigen/CXX11/Tensor"
#include <iostream>

using Eigen::Tensor;

TEST_CASE("Exercise 12.6: Broadcast Operations", "[shapes]") {

    Eigen::Tensor<int, 2> s(2, 2);
    s.setZero();
    s(0,0) = 1;
    s(1,1) = -1;
    Eigen::array<int, 2> bcast({10, 10});
    Eigen::Tensor<int, 2> ss = s.broadcast(bcast);

    std::cout << "SS: " << std::endl << ss << std::endl;
}