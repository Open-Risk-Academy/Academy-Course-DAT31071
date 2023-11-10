// (c) 2023  Open Risk (https://www.openriskmanagement.com)
// Example Script for the Open Risk Academy Course DAT31071
// Tensor Calculations with the Eigen C++ Library
// https://www.openriskacademy.com/course/view.php?id=71

#include <catch2/catch.hpp>
#include "eigen-3.4.0/Eigen/Dense"
#include "eigen-3.4.0/unsupported/Eigen/CXX11/Tensor"
#include <iostream>

using Eigen::Tensor;

TEST_CASE("Exercise 3.3. Raw data", "[initialization]") {

    int dim1 = 5;
    int dim2 = 5;
    Tensor<float, 2> T(dim1, dim1);
    std::iota(T.data(), T.data() + T.size(), 1);

    Tensor<float, 2> S(dim2, dim2);
    std::fill(S.data(), S.data() + S.size(), 1);
    std::cout << "T: " << std::endl << T << std::endl;
    std::cout << "S: " << std::endl << S << std::endl;

    REQUIRE(T(dim1-1,dim1-1) == dim1 * dim1);
    REQUIRE(S(dim2-1,dim2-1) == 1);

}