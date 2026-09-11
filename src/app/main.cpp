#include <iostream>
#include <boost/program_options.hpp>
#include "core_lib.h"

namespace po = boost::program_options;

int main(int argc, char* argv[]) {
    try {

        std::cout << "Starting VisionAnalyzer...\n";
        CoreLib::runMatrixTest();

    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << "\n";
        return 1;
    }

    return 0;
}