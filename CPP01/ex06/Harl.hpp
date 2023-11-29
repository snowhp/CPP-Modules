//
// Created by tde-sous on 11/27/23.
//

#ifndef CPP01_HARL_HPP
#define CPP01_HARL_HPP

#include <string>
#include <iostream>
#include <cstdlib>

class Harl {
private:
    void debug(void);

    void info(void);

    void warning(void);

    void error(void);

public:
    void complain(char *str);
};


#endif //CPP01_HARL_HPP
