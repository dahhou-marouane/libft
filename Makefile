NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
FILES = ft_atoi.c \
		ft_isascii.c \
		ft_memcmp.c \
		ft_putendl_fd.c \
		ft_strdup.c \
		ft_strlen.c \
		ft_strtrim.c \
		ft_bzero.c \
		ft_isdigit.c \
		ft_memcpy.c \
		ft_putnbr_fd.c \
		ft_striteri.c \
		ft_strmapi.c \
		ft_substr.c \
		ft_calloc.c \
		ft_isprint.c \
		ft_memmove.c \
		ft_putstr_fd.c \
		ft_strjoin.c \
		ft_strncmp.c \
		ft_tolower.c \
		ft_isalnum.c \
		ft_itoa.c \
		ft_memset.c \
		ft_split.c \
		ft_strlcat.c \
		ft_strnstr.c \
		ft_toupper.c \
		ft_isalpha.c \
		ft_memchr.c \
		ft_putchar_fd.c \
		ft_strchr.c \
		ft_strlcpy.c \
		ft_strrchr.c

OBJ = $(FILES:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	@ar rcs $(NAME) $(OBJ)

%.o: %.c libft.h
	@cc $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "rm .o"

fclean:
	@rm -f $(NAME)
	@echo "rm .o and .a"
	@rm -f $(OBJ)

re: fclean allft_printf.c  ft_put.c

.PHONY: clean fclean