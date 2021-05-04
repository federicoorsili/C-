NAME = Sorcerer

SRC = 	main.cpp \
		AssaultTerminator.cpp \
		Squad.cpp \
		TacticalMarine.cpp \


all:
	clang++ -Wall -Werror -Wextra $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)

re:
	fclean all

clean: fclean