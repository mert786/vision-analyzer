#pragma once

#include <Eigen/Dense>
#include <iostream>

class CoreLib {
public:
    static void runMatrixTest() {
        Eigen::Matrix2d mat;
        mat << 1, 2,
               3, 4;
        std::cout << "Eigen Matrix successfully initialized:\n" << mat << std::endl;
    }
};