#include "ZombieHorde.hpp"

std::string	ZombieHorde::randomName(void)
{
	static std::string names[] = {"John", "Mary", "Kate", "Andrew", "Lloyd",
	"James", "Elle", "Sonya", "Elvis", "Bobby", "Link"};
	srand(time(NULL));
	return (names[rand() % 10]);
}

