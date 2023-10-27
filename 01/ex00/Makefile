NAME		=	Zombie
CC			=	c++
CPPFLAGS	=	-Wall -Werror -Wextra
CPPSTYLE	=	-std=c++98
FILES		=	main Zombie newZombie randomChump
SRCS		=	$(addsuffix .cpp,$(FILES))
OBJS		=	$(subst .cpp,.o,$(SRCS))
RM			=	rm -rf
MKD			=	mkdir -p

%.o: %.cpp
	$(CC) $(CPPFLAGS) $(CPPSTYLE) -c $(SRCS)

all:
	$(MAKE)	$(NAME)

$(NAME)	:	$(SRCS)
	$(CC) $(CPPFLAGS) $(CPPSTYLE) $(OBJS) -o $(NAME)

clean	:	$(OBJS)
	$(RM) $(OBJS)

fclean	:	$(NAME) clean
	$(MAKE) clean
	$(RM) $(NAME)

re		:	all fclean
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re