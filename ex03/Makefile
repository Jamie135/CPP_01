NAME = Violence
CC = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98
FILES = main \
		HumanA \
		HumanB \
		Weapon

INCLUDES =	HumanA.hpp \
			HumanB.hpp \
			Weapon.hpp

SRCS = $(addsuffix .cpp, $(FILES))
OBJS = $(addsuffix .o, $(FILES))

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $^

.cpp.o: $(SRCS) $(INCLUDES)
	$(CC) $(FLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re