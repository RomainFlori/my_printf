NAME	= my_printf

CC	= gcc

RM	= rm -f

SRCS	= ./dectohex.c \
	  ./dectooct.c \
	  ./fonctions1.c \
	  ./fonctions2.c \
	  ./minidectohex.c \
	  ./my_printf.c \
	  ./my_putchar.c \
	  ./my_putnbr.c \
	  ./my_putnbr_unsi.c \
	  ./my_putstr.c \
	  ./my_strlen.c 

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./
CFLAGS += -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
