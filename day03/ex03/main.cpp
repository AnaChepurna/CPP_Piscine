#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	FragTrap robot2;
	NinjaTrap robot1("Serjio");

	robot1.takeDamage(robot2.meleeAttack(robot1.getName()));
	robot2.takeDamage(robot1.rangedAttack(robot2.getName()));
	robot1.beRepaired(2);
	robot2.beRepaired(100);
	robot2.takeDamage(robot1.ninjaShoebox(robot2));
	ScavTrap scav("Lusy");
	NinjaTrap ninja("Loky");
	robot1.ninjaShoebox(scav);
	robot1.ninjaShoebox(ninja);
}