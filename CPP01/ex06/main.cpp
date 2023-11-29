//
// Created by tde-sous on 11/27/23.
//

#include "Harl.hpp"

int main(int argc, char **argv) {
    Harl test;
    (void) argc;
    if (argc != 2)
        return (std::cout << "Usage: ./harlFilter level\n", 0);
    test.complain(argv[1]);
}