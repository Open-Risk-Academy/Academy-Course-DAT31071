// (c) 2023  - 2024 Open Risk (https://www.openriskmanagement.com)
// Example Script for the Open Risk Academy Course DAT31071
// Tensor Calculations with the Eigen C++ Library
// https://www.openriskacademy.com/course/view.php?id=71

#include <catch2/catch.hpp>
#include "eigen-3.4.0/Eigen/Dense"
#include "eigen-3.4.0/unsupported/Eigen/CXX11/Tensor"
#include <iostream>

using Eigen::Tensor;

TEST_CASE("Exercise 1.1. Find Installed Eigen Version", "[environment]") {

    std::stringstream ss;
    ss.str("");
    ss << EIGEN_WORLD_VERSION;
    ss << ".";
    ss << EIGEN_MAJOR_VERSION;
    ss << ".";
    ss << EIGEN_MINOR_VERSION;
    std::string eigen_version = ss.str();

    std::cout << "Eigen Version: " << eigen_version << std::endl;
    REQUIRE(eigen_version == "3.4.0");

}