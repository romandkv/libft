NAME = libft.a

SRCS = *.c

OBJS = *.o

all: $(NAME)

$(NAME): 
	gcc -Wall -Wextra -Werror -c $(SRCS)
	ar -rc $(NAME) *.o
	
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f  $(NAME)

re: fclean all

