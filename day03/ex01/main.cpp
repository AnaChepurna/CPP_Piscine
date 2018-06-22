#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	FragTrap robot2;
	ScavTrap robot1("Bobby");
	robot1.setName("James");

	robot1.challengeNewcomer();
	robot1.takeDamage(robot2.meleeAttack(robot1.getName()));
	robot2.takeDamage(robot1.rangedAttack(robot2.getName()));
	robot1.beRepaired(2);
	robot2.beRepaired(100);
	robot1.takeDamage(robot2.vaulthunter_dot_exe(robot1.getName()));
	robot1.takeDamage(robot2.vaulthunter_dot_exe(robot1.getName()));
	robot1.takeDamage(robot2.vaulthunter_dot_exe(robot1.getName()));
	robot1.takeDamage(robot2.vaulthunter_dot_exe(robot1.getName()));
}