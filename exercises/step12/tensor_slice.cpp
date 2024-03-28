// (c) 2023  - 2024 Open Risk (https://www.openriskmanagement.com)
// Example Script for the Open Risk Academy Course DAT31071
// Tensor Calculations with the Eigen C++ Library
// https://www.openriskacademy.com/course/view.php?id=71

#include <catch2/catch.hpp>
#include "eigen-3.4.0/Eigen/Dense"
#include "eigen-3.4.0/unsupported/Eigen/CXX11/Tensor"
#include <iostream>

using Eigen::Tensor;

TEST_CASE("Exercise 12.3: Slice", "[shapes]") {

    Tensor<int, 1> V(10);
    V.setValues({0, 1, 2, 3, 4, 5, 6, 7, 8, 9});
    std::cout << "V: " << std::endl << V << std::endl;
    Eigen::array<Eigen::Index, 1> offsets1 = {0};
    Eigen::array<Eigen::Index, 1> extents1 = {5};
    Tensor<int, 1> slice1 = V.slice(offsets1, extents1);
    std::cout << "V Slice: " << std::endl << slice1 << std::endl;
    REQUIRE(slice1.size() == 5);

    Tensor<int, 2> M(3, 3);
    M.setValues({{0, 1, 2},
                 {3, 4, 5},
                 {6, 7, 8}});
    std::cout << "M: " << std::endl << M << std::endl;

    Eigen::array<Eigen::Index, 2> offsets2 = {0, 0};
    Eigen::array<Eigen::Index, 2> extents2 = {2, 2};
    Tensor<int, 2> slice2 = M.slice(offsets2, extents2);
    std::cout << "M Slice 2: " << std::endl << slice2 << std::endl;

    Eigen::array<Eigen::Index, 2> extents3 = {M.dimension(0), M.dimension(1)};
    Tensor<int, 2> slice3 = M.slice(offsets2, extents3);
    std::cout << "M Slice 3: " << std::endl << slice3 << std::endl;

    Eigen::array<Eigen::Index, 2> extents4 = {M.dimension(0), 1};
    Tensor<int, 2> slice4 = M.slice(offsets2, extents4);
    std::cout << "M Slice 4: " << std::endl << slice4 << std::endl;

    Eigen::array<Eigen::Index, 2> offsets3 = {0, 1};
    Eigen::array<Eigen::Index, 2> extents5 = {M.dimension(0), 1};
    Tensor<int, 2> slice5 = M.slice(offsets3, extents5);
    std::cout << "M Slice 5: " << std::endl << slice5 << std::endl;

}