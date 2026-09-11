# --- 1. Test Executable ---
# Define the test binary and its source files
add_executable(VisionAnalyzerTests test_main.cpp)

# --- 2. Link Dependencies ---
# Link Google Test (gtest, gtest_main) and the library we want to test (MathCore)
target_link_libraries(VisionAnalyzerTests 
    PRIVATE 
        gtest 
        gtest_main 
        MathCore
)

# --- 3. Register with CTest ---
# Register the executable as a test case so that 'ctest' can execute it
add_test(NAME CoreMathUnitTests COMMAND VisionAnalyzerTests)