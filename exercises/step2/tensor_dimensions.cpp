// (c) 2023  - 2024 Open Risk (https://www.openriskmanagement.com)
// Example Script for the Open Risk Academy Course DAT31071
// Tensor Calculations with the Eigen C++ Library
// https://www.openriskacademy.com/course/view.php?id=71

#include <catch2/catch.hpp>
#include "eigen-3.4.0/Eigen/Dense"
#include "eigen-3.4.0/unsupported/Eigen/CXX11/Tensor"
#include <iostream>

using Eigen::Tensor;

TEST_CASE("Exercise 2.2. Tensor Dimensions", "[classes]") {

    int size = 60;
    Tensor<bool, 3> T(3, 4, 5);
    T.setRandom();
    std::cout << "I size: " << T.size() << std::endl;
    std::cout << "I dimensions: " << T.dimensions() << std::endl;
    std::cout << "I dim 1: " << T.dimension(0) << std::endl;
    std::cout << "I dim 2: " << T.dimension(1) << std::endl;
    std::cout << "I dim 3: " << T.dimension(2) << std::endl;
    std::cout << "I element: " << T(0, 1, 2) << std::endl;

    for(Eigen::Index i=0; i<T.dimension(0); i++) {
        std::cout << i << " : " << T(i, 0, 0) << std::endl;
    }

    REQUIRE(T.size() == size);
    REQUIRE(T.dimension(0)*T.dimension(1)*T.dimension(2) == T.size());
}