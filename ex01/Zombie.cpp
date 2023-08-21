#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << name << " got snipped and died.\n"  << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n" << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->name = name;
}