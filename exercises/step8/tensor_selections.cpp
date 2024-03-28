// (c) 2023  - 2024 Open Risk (https://www.openriskmanagement.com)
// Example Script for the Open Risk Academy Course DAT31071
// Tensor Calculations with the Eigen C++ Library
// https://www.openriskacademy.com/course/view.php?id=71

#include <catch2/catch.hpp>
#include "eigen-3.4.0/Eigen/Dense"
#include "eigen-3.4.0/unsupported/Eigen/CXX11/Tensor"
#include <iostream>

using Eigen::Tensor;

TEST_CASE("Exercise 8.4: Selection", "[binary-operations]") {

    Eigen::Tensor<bool, 2> ifT(3, 3);
    Eigen::Tensor<float, 2> thenT(3, 3);
    Eigen::Tensor<float, 2> elseT(3, 3);
    Eigen::Tensor<float, 2> resultT(3, 3);

    ifT.setValues({{1, 0, 0}, {0, 1, 0}, {0, 0, 1}});
    thenT.setRandom();
    elseT.setRandom();

    resultT = ifT.select(thenT, elseT);

    std::cout << "if T: " << std::endl << ifT << std::endl;
    std::cout << "then T: " << std::endl << thenT << std::endl;
    std::cout << "else T: " << std::endl << elseT << std::endl;
    std::cout << "result T: " << std::endl << resultT << std::endl;

}