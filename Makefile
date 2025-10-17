CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

NAME = libft.a
AR = ar
ARFLAGS = rcs

SRCS =ft_atoi.c\
				ft_bzero.c\
				ft_calloc.c\
				ft_isalnum.c\
				ft_isalpha.c\
				ft_isascii.c\
				ft_isdigit.c\
				ft_isprint.c\
				ft_memchr.c\
				ft_memcmp.c\
				ft_memcpy.c\
				ft_memmove.c\
				ft_memset.c\
				ft_strchr.c\
				ft_strdup.c\
				ft_strlcat.c\
				ft_strlcpy.c\
				ft_strlen.c\
				ft_strncmp.c\
				ft_strnstr.c\
				ft_strrchr.c\
				ft_tolower.c\
				ft_toupper.c\
				ft_substr.c\

OBJS = $(SRCS:.c=.o) // una variable cuya dependencia es convertir los . c en .o

all: $(NAME)

$(NAME) : $(OBJS)
	@$(AR) $(ARFLAGS) $(NAME) $(OBJS) //crear el ejecutable

%.o : %.c
	@$(CC) $(CCFLAGS) -c -o $@ $< //indicadores
clean:
	@$(RM) $(OBJS)
fclean: clean
	@rm -f $(NAME)
re: fclean all //limpiar y recompilar todo

.PHONY: all clean fclean re
