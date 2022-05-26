##
## EPITECH PROJECT, 2021
## makefile
## File description:
## makefile
##

GREY   = $ \x1b[30m
RED    = $ \x1b[31m
GREEN  = $ \x1b[32m
YELLOW = $ \x1b[33m
BLUE   = $ \x1b[34m
PURPLE = $ \x1b[35m
CYAN   = $ \x1b[36m
WHITE  = $ \x1b[37m

END    = $ \x1b[0m
BOLD   = $ \x1b[1m
UNDER  = $ \x1b[4m
REV    = $ \x1b[7m

IGREY   = $ \x1b[40m
IRED    = $ \x1b[41m
IGREEN  = $ \x1b[42m
IYELLOW = $ \x1b[43m
IBLUE   = $ \x1b[44m
IPURPLE = $ \x1b[45m
ICYAN   = $ \x1b[46m
IWHITE  = $ \x1b[47m

CFLAGS = -I./includes

SRC	=	03.c	\
		03_2.c	\
		03_3.c	\
		03_4.c	\
		03_5.c	\
		03_6.c	\

OBJ =	$(SRC:.c=.o)

%.o: %.c
	@gcc -o $@ -c $< $(CFLAGS)
	@printf "\t${PURPLE}%s\n${END}"  $<

NAME =	03

all: $(NAME)

$(NAME): header $(OBJ)
	@gcc -o $(NAME) $(OBJ)

header:
	@printf "${IWHITE}               ${BOLD}${PURPLE}FILES                    \
	${END}\n"

clean:
	@printf "${IWHITE}               ${BOLD}${GREY}CLEAN                    \
	${END}\n\n"
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
