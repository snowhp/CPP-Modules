//
// Created by tde-sous on 11/27/23.
//

#include "Harl.hpp"
#include <string>

void Harl::debug() {
    std::cout << "[ DEBUG ]\n" << "I love having extra bacon for my "
                                  "7XL-double-cheese-triple-pickle-special-ketchup burger. I "
                                  "really do!\n\n";
}

void Harl::info() {
    std::cout << "[ INFO ]\n" << "I cannot believe adding extra bacon costs more money. You "
                                 "didn’t put enough bacon in my burger! If you did, I wouldn’t "
                                 "be asking for more!\n\n";
}

void Harl::warning() {
    std::cout << "[ WARNING ]\n" << "I think I deserve to have some extra bacon for free. I’ve been "
                                    "coming for years whereas you started working here since last "
                                    "month.\n\n";
}

void Harl::error() {
    std::cout << "[ ERROR ]\n" << "This is unacceptable! I want to speak to the manager now.\n\n";
}

void Harl::complain(char *str) {
    void (Harl::*func_ptr[4])() = {&Harl::debug, &Harl::info, &Harl::warning,
                                   &Harl::error};
    std::string level(str);
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i;

    for (i = 0; i <= 3; i++) {
        if (i == 3 && level != levels[i]) {
            i = -1;
            break;
        }
        if (level == levels[i])
            break;
    }

    switch (i) {
        default:
            std::cout << "[ Probably complaining about insignificant problems ]\n";
            break;
        case 0:
            (this->*func_ptr[0])();
        case 1:
            (this->*func_ptr[1])();
        case 2:
            (this->*func_ptr[2])();
        case 3:
            (this->*func_ptr[3])();
            break;

    }
}