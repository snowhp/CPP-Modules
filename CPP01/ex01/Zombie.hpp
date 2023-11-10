#ifndef EX01_ZOMBIE_HPP
#define EX01_ZOMBIE_HPP
#include <iostream>

class Zombie {
private:
    std::string name;
public:
    void announce();
    void SetName(const std::string& InputName);
    ~Zombie();

};

Zombie* zombieHorde( int N, std::string name );


#endif //EX01_ZOMBIE_HPP
