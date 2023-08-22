#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP
# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
private:
	std::string	name;
	Weapon		*weapon;
	bool		armed;
public:
	HumanB(std::string name);
	~HumanB(void);
	void	setWeapon(Weapon &weapon);
	void	attack(void);
};

#endif