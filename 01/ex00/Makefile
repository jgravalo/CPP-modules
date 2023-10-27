NAME		=	Zombie
CC			=	c++
CPPFLAGS	=	-Wall -Werror -Wextra
CPPSTYLE	=	-std=c++98
FILES		=	main Zombie newZombie randomChump
SRCS		=	$(addsuffix .cpp,$(FILES))
OBJS		=	$(SRCS:.o=.cpp) #$(subst .cpp,.o,$(SRCS))
RM			=	rm -rf
MKD			=	mkdir -p

%.o: %.cpp
	$(CC) $(CPPFLAGS) $(CPPSTYLE) -c $(SRCS)

$(NAME)	:	$(SRCS)
	$(CC) $(CPPFLAGS) $(CPPSTYLE) $(OBJS) -o $(NAME)

all:
	$(MAKE)	$(NAME)

clean	:	$(OBJS)
	$(RM) $(OBJS)

fclean	:	$(NAME) clean
	$(MAKE) clean
	$(RM) $(NAME)

re		:	all fclean
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re