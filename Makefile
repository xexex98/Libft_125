NAME = libft.a\

HEADER = libft.h\

SRC = 	ft_atoi.c ft_bzero.c ft_calloc.c\
		ft_isalnum.c ft_isalpha.c\
		ft_isascii.c ft_isdigit.c ft_isprint.c\
		ft_itoa.c ft_memchr.c ft_memcmp.c\
		ft_memcpy.c ft_memmove.c ft_memset.c\
		ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
		ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c\
		ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c\
		ft_strlen.c ft_strmapi.c ft_strncmp.c\
		ft_strnstr.c ft_strrchr.c ft_strtrim.c\
		ft_substr.c ft_tolower.c ft_toupper.c\

OBJ = ${SRC:%.c=%.o}

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c\
		ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c\
		ft_lstclear.c ft_lstiter.c ft_lstmap.c\

BONUS_OBJ = ${BONUS:%.c=%.o}

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I $(HEADER)


all:			$(NAME)

%.o: %.c
				@gcc $(CFLAGS) -c $< -o $@

$(NAME):		$(OBJ) $(HEADER)
				@ar rcs $(NAME) $(OBJ)

bonus:			$(OBJ) $(BONUS_OBJ) $(HEADER)
				@ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)

clean:
				@$(RM) $(OBJ) $(BONUS_OBJ)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re bonus
