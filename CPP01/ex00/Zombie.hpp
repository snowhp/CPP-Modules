#ifndef EX00_ZOMBIE_HPP
#define EX00_ZOMBIE_HPP
#include <iostream>

class Zombie {
private:
    std::string name;
public:
    void announce(void);
    Zombie(std::string Name);
};


#endif //EX00_ZOMBIE_HPP
