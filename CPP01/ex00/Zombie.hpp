#ifndef EX00_ZOMBIE_HPP
#define EX00_ZOMBIE_HPP
#include <iostream>

class Zombie {
private:
    std::string name;
public:
    void announce(void);
    Zombie(const std::string& inputname);
    ~Zombie();

};

void randomChump( std::string name );
Zombie* newZombie( std::string name );


#endif //EX00_ZOMBIE_HPP
