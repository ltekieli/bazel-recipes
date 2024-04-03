#include <exception>
#include <iostream>

int main() {
    std::cout << "Hello!" << std::endl;

    try {
        throw std::invalid_argument( "test exception, good to be caught" );
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
