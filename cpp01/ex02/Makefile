NAME = zombie

SRC = 	main.cpp \
		Zombie.cpp \
		ZombieEvent.cpp \

all:
	clang++ -Wall -Werror -Wextra $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)

re:
	fclean all

clean: fclean