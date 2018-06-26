CC = clang++
CFLAGS = -Wall -Wextra -Werror
NAME = real_type
SRC =   main.cpp \
        A.cpp \
        B.cpp \
        C.cpp \
        Base.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all