NAME = libftprintf.a

SRC_DIR = src

SRCS = \
	ft_printf.c \
	ft_print_char.c \
	ft_print_num.c \
	ft_print_hex.c \
	ft_print_unsint.c \
	ft_print_ptr.c \

SRCS := $(addprefix $(SRC_DIR)/, $(SRCS))

OBJS = $(SRCS:.c=.o)


CC = cc
CFLAGS = -Wall -Wextra -Werror -I include
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re