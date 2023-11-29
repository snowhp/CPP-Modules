//
// Created by tde-sous on 11/27/23.
//

#include "Harl.hpp"
#include <string>

void Harl::debug() {
    std::cout << "I love having extra bacon for my "
                 "7XL-double-cheese-triple-pickle-special-ketchup burger. I "
                 "really do!\n";
}

void Harl::info() {
    std::cout << "I cannot believe adding extra bacon costs more money. You "
                 "didn’t put enough bacon in my burger! If you did, I wouldn’t "
                 "be asking for more!\n";
}

void Harl::warning() {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been "
                 "coming for years whereas you started working here since last "
                 "month.\n";
}

void Harl::error() {
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level) {
    void (Harl::*func_ptr[4])() = {&Harl::debug, &Harl::info, &Harl::warning,
                                   &Harl::error};
    int levelInt = atoi(level.c_str());
    (this->*func_ptr[levelInt])();
}
