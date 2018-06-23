CC = clang++
CFLAGS = -Wall -Wextra -Werror
NAME = ex02
SRC =   main.cpp \
		Squad.cpp \
		TacticalMarine.cpp \
		AssaultTerminator.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

main.o : main.cpp ISquad.hpp ISpaceMarine.hpp
	$(CC) $(CFLAGS) -o $@ -c $<

%.o: %.cpp %.hpp
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all