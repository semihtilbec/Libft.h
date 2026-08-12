NAME	= libft.a
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f
SRCS 	= $(shell find . -name "ft_*.c")
AR		= ar rcs
OBJS	= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
		$(AR) $(NAME) $(OBJS)

