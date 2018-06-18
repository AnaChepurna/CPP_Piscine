CC = clang++
CFLAGS = -Wall -Wextra -Werror
NAME = phonebook
SRC =   main.cpp \
        contact.cpp
INCL =  contact.h
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp INCL
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all