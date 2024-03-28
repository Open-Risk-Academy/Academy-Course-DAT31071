// (c) 2023  - 2024 Open Risk (https://www.openriskmanagement.com)
// Example Script for the Open Risk Academy Course DAT31071
// Tensor Calculations with the Eigen C++ Library
// https://www.openriskacademy.com/course/view.php?id=71

#include <catch2/catch.hpp>
#include "eigen-3.4.0/Eigen/Dense"
#include "eigen-3.4.0/unsupported/Eigen/CXX11/Tensor"
#include <iostream>

using Eigen::Tensor;

TEST_CASE("Exercise 10.3: Chained Contractions", "[contractions]") {

    Eigen::Tensor<double, 4> T(3, 3, 3, 3);
    T.setRandom();
    for(Eigen::Index i=0; i < T.dimension(0); i++) {
        std::cout << i << " : " << T(i, 0, 0, 0) << std::endl;
    }

    Eigen::Tensor<double, 2> Q(3, 3);
    Q.setZero();
    Q(0, 0) = 1.0;
    Q(1, 1) = 1.0;
    Q(2, 2) = 1.0;

    Eigen::IndexPairList<Eigen::type2indexpair<0, 1>> dim0;
    Eigen::IndexPairList<Eigen::type2indexpair<1, 1>> dim1;
    Eigen::IndexPairList<Eigen::type2indexpair<2, 1>> dim2;
    Eigen::IndexPairList<Eigen::type2indexpair<3, 1>> dim3;

    Eigen::Tensor<double, 4> res1 = T.contract(Q, dim0);

    Eigen::array<Eigen::IndexPair<int>, 1> dims = { Eigen::IndexPair<int>(0, 1) };

    Eigen::Tensor<double, 4> res2 = T.contract(Q, dims);

    Eigen::Tensor<double, 4> res4 = T.contract(Q, dim0).contract(Q, dim1).contract(Q, dim2).contract(Q, dim3);

    std::cout << "Result: " << std::endl << res1 << std::endl;
    std::cout << "Result: " << std::endl << res2 << std::endl;
}