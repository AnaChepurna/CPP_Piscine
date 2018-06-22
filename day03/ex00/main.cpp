#include "FragTrap.hpp"

int main()
{
	FragTrap robot1;
	FragTrap robot2("Bobby");
	FragTrap robot3(robot1);
	robot3 = robot2;
	robot1.setName("James");

	robot1.takeDamage(robot2.meleeAttack(robot1.getName()));
	robot2.takeDamage(robot1.rangedAttack(robot2.getName()));
	robot1.beRepaired(2);
	robot2.beRepaired(100);
	robot1.takeDamage(robot2.vaulthunter_dot_exe(robot1.getName()));
	robot1.takeDamage(robot2.vaulthunter_dot_exe(robot1.getName()));
	robot1.takeDamage(robot2.vaulthunter_dot_exe(robot1.getName()));
	robot1.takeDamage(robot2.vaulthunter_dot_exe(robot1.getName()));
	robot1.vaulthunter_dot_exe(robot2.getName());
	robot2.takeDamage(5);
}