NAME		=	megaphone
CC			=	c++
EXT			=	.cpp
CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98
DEPFLAGS	=	-MMD -MP
FILES		=	main
SRCS		=	$(addsuffix $(EXT),$(FILES))
OBJ_DIR		=	obj/
OBJS		=	$(addprefix $(OBJ_DIR),$(subst $(EXT),.o,$(SRCS)))
DEPS		=	$(subst .o,.d,$(OBJS))
RM			=	rm -rf
MKD			=	mkdir -p
MK			=	Makefile

$(OBJ_DIR)%.o: %$(EXT) #$(MK)
	@$(MKD) $(OBJ_DIR)
	$(CC) $(CPPFLAGS) $(DEPFLAGS) -c $< -o $@

$(NAME)	:	$(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

all		:	$(NAME)

clean	:
	$(RM) $(OBJ_DIR)

fclean	:
	$(MAKE) clean
	$(RM) $(NAME)

re		:	all fclean
	$(MAKE) fclean
	$(MAKE) all

.PHONY	: all clean fclean re