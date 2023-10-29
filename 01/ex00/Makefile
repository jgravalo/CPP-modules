NAME		=	Zombie
CC			=	c++
CPPFLAGS	=	-Wall -Werror -Wextra
CPPSTYLE	=	-std=c++98
FILES		=	main Zombie newZombie randomChump
SRCS		=	$(addsuffix .cpp,$(FILES))
OBJS		=	$(subst .cpp,.o,$(SRCS))
RM			=	rm -rf
MKD			=	mkdir -p

%.o: %.cpp Makefile
	$(CC) $(CPPFLAGS) $(CPPSTYLE) -c $< -o $@

$(NAME)	:	$(OBJS)
	$(CC) $(CPPFLAGS) $(CPPSTYLE) $(OBJS) -o $(NAME)

all:	$(NAME)

clean	:
	$(RM) $(OBJS)

fclean	:
	$(MAKE) clean
	$(RM) $(NAME)

re		:	all fclean
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re