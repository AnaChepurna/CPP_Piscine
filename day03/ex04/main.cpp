#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	FragTrap robot2;
	SuperTrap robot1("Ivan");

	robot1.takeDamage(robot2.meleeAttack(robot1.getName()));
	robot2.takeDamage(robot1.rangedAttack(robot2.getName()));
	robot1.beRepaired(2);
	robot2.beRepaired(100);
	robot2.takeDamage(robot1.ninjaShoebox(robot2));
	ScavTrap scav("Lusy");
	NinjaTrap ninja("Loky");
	robot1.ninjaShoebox(scav);
	robot1.ninjaShoebox(ninja);
	robot1.vaulthunter_dot_exe(robot2.getName());
}