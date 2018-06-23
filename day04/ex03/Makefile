CC = clang++
CFLAGS = -Wall -Wextra -Werror
NAME = ex03
SRC =   main.cpp \
		Character.cpp \
		AMateria.cpp \
		Cure.cpp \
		Ice.cpp \
		MateriaSource.cpp
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