# E89 Pedagogical & Technical Lab
# project:     template C repo
# created on:  2022-09-14 - 16:36 +0200
# 1st author:  Élise C. Philippe - eriizu
# description: Building the project

NAME	=	rp_sort

SRCS	=	src/main.c		\
		src/convert.c		\
		src/add.c		\
		src/size_int.c		\
		src/algo.c		\
		src/mouv/pa.c		\
		src/mouv/pb.c		\
		src/mouv/ra.c		\
		src/mouv/rb.c		\
		src/mouv/rc.c		\
		src/mouv/rra.c		\
		src/mouv/rrb.c		\
		src/mouv/rrc.c		\
		src/mouv/sa.c		\
		src/mouv/sb.c		\
		src/mouv/sc.c		\
		src/mouv/sd.c		\

OBJS	=	$(SRCS:.c=.o)

CFLAGS	+=	-W -Wall -Wextra -Iinclude/

LDFLAGS	+=

RM	=	rm -vf

CC	:=	gcc

ifdef RELEASE
CFLAGS += -O2
endif

ifdef DEBUG
CFLAGS += -g
endif

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) -o $(NAME)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

# Theses rules do not directly map to a specific file
.PHONY: all clean fclean re
