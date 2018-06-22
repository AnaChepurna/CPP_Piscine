CC = clang++
CFLAGS = -Wall -Wextra -Werror
NAME = traps
SRC =   main.cpp \
		FragTrap.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp \
		NinjaTrap.cpp \
		SuperTrap.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

main.o : main.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

%.o: %.cpp %.hpp
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all