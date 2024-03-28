// (c) 2023  - 2024 Open Risk (https://www.openriskmanagement.com)
// Example Script for the Open Risk Academy Course DAT31071
// Tensor Calculations with the Eigen C++ Library
// https://www.openriskacademy.com/course/view.php?id=71

#include <catch2/catch.hpp>
#include "eigen-3.4.0/Eigen/Dense"
#include "eigen-3.4.0/unsupported/Eigen/CXX11/Tensor"
#include <iostream>

using Eigen::Tensor;

TEST_CASE("Exercise 12.9: Extract Patch", "[shapes]") {

    Eigen::Tensor<float, 2> tensor(3, 4);
    tensor.setValues({{0.0f, 1.0f, 2.0f,  3.0f},
                      {4.0f, 5.0f, 6.0f,  7.0f},
                      {8.0f, 9.0f, 10.0f, 11.0f}});
    std::cout << tensor << std::endl;

    Eigen::Tensor<float, 3> patch;
    Eigen::array<int, 2> patch_dims;
    patch_dims[0] = 3;
    patch_dims[1] = 3;
    patch = tensor.extract_patches(patch_dims);

    for (int k = 0; k < patch.dimension(2); ++k) {
        std::cout << "patch index: " << k << std::endl;
        for (int i = 0; i < patch_dims[0]; ++i) {
            for (int j = 0; j < patch_dims[1]; ++j) {
                std::cout << patch(i, j, k) << " ";
            }
            std::cout << std::endl;
        }
    }
}