NAME = libft.a

# Add more files to sources
SRCS = ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c

# Use same files from sources, but change .c to .o
OFILES = ${SRCS:.c=.o}

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

LIB = ar rcs
RM = rm -f

all: $(NAME)

$(NAME): $(OFILES)
	$(LIB) $(NAME) $(OFILES)

clean:
	$(RM) $(OFILES)

fclean: clean
	$(RM) $(NAME)

re: fclean all

# phony will run, independent from the state of the file system, avoid make in files with same name
.PHONY: all clean fclean re