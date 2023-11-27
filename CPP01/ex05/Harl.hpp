//
// Created by tde-sous on 11/27/23.
//

#ifndef CPP01_HARL_HPP
#define CPP01_HARL_HPP


class Harl {
private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
    void (*func_ptr[4])() = {&debug(), &info(), &warning(), &error()};
public:
    void complain( std::string level );
};


#endif //CPP01_HARL_HPP
