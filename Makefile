NAME = libft.a

SRC = ft_append.c \
	  ft_lstadd_front.c \
	  ft_memset.c \
	  ft_strlcpy.c \
	  ft_atoi.c \
	  ft_lstclear.c \
	  ft_putchar_fd.c \
	  ft_strlen.c \
	  ft_bzero.c \
	  ft_lstdelone.c \
	  ft_putendl_fd.c \
	  ft_strmapi.c \
	  ft_calloc.c \
	  ft_lstiter.c \
	  ft_putnbr_fd.c \
	  ft_strncmp.c \
	  ft_freestrarray.c \
	  ft_lstlast.c \
	  ft_putstr_fd.c \
	  ft_strnstr.c \
	  ft_isalnum.c \
	  ft_lstmap.c \
	  ft_split.c \
	  ft_strrchr.c \
	  ft_isalpha.c \
	  ft_lstnew.c \
	  ft_strarraydup.c \
	  ft_strtrim.c \
	  ft_isascii.c \
	  ft_lstsize.c \
	  ft_strchr.c \
	  ft_substr.c \
	  ft_isdigit.c \
	  ft_memchr.c \
	  ft_strdup.c \
	  ft_tolower.c \
	  ft_isprint.c \
	  ft_memcmp.c \
	  ft_striteri.c \
	  ft_toupper.c \
	  ft_itoa.c \
	  ft_memcpy.c \
	  ft_strjoin.c \
	  ft_lstadd_back.c \
	  ft_memmove.c \
	  ft_strlcat.c

OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all