SRCS = ft_printf.c \
	format_handler.c \
	nbr_utils.c \
	hex_utils.c \
	ptr_utils.c \
	str_utils.c \
	unsigned_nbr_utils.c 


NAME = libftprintf.a

OBJS_DIR = obj_files/
OBJS = $(SRCS:.c=.o)
OBJECTS_PRE = $(addprefix $(OBJS_DIR), $(OBJS))

CC = gcc

CFLAGS = -Wall -Wextra -Werror

$(OBJS_DIR)%.o : %.c
	@mkdir -p $(OBJS_DIR)
	@echo "Compiling : $<"
	@gcc $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS_PRE)
	@ar r $(NAME) $(OBJECTS_PRE)

all: $(NAME)

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

