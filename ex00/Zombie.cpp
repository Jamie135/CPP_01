#include "Zombie.hpp"

Zombie::Zombie(std::string str) : name(str)
{
	std::cout << "I am " << name << ", and you are my meal!" << "\n" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << name << " got snipped and died.\n"  << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n" << std::endl;
}