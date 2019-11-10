#include <iostream>
#include <string>

int main(int argc, char **argv) {
    std::string name;

    if(argc > 1) {
        name = argv[1];
    } else {
        std::cout << "Please enter your name: ";
        std::cin >> name;
    }

    std::cout << "Hello, " << name << "!" << std::endl;
    return 0;
}