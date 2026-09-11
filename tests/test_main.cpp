#include <gtest/gtest.h>
#include "CoreLib.h"

// Simple unit test to verify math/matrix logic
TEST(CoreLibTest, MatrixInitialization) {
    // Just testing that the function executes without crashing
    EXPECT_NO_THROW(CoreLib::runMatrixTest());
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}