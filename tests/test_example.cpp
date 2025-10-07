#include <cassert>
#include <sstream>
#include <iostream>
#include "example.h"

// A very small test: call exampleFunction and ensure it doesn't throw
int main() {
    try {
        exampleFunction();
    } catch (...) {
        std::cerr << "exampleFunction threw an exception" << std::endl;
        return 1;
    }

    // If we reach here assume success
    return 0;
}
