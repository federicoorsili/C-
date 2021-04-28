NAME = Sorcerer

SRC = 	main.cpp \
		Sorcerer.cpp \
		Victim.cpp \
		Peon.cpp \
		GeneralVictim.cpp \

all:
	clang++ -Wall -Werror -Wextra $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)

re:
	fclean all

clean: fclean