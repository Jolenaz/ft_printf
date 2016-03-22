NAME = ft_printf

#==============#
#_- Compiler -_#
#==============#
CC = gcc
CFLAGS = -Werror -Wall -Wextra -g
RM = rm -rf
MAKE = make -sC

#====================#
#_- Programes Path -_#
#====================#
SRC_PATH = ./srcs/
OBJ_PATH = ./objs/
INC_PATH = ./include/
LIB_PATH =

#=================#
#_- lib externe -_#
#=================#

LIBFT_PATH = ./libft/
LIBFT = -L$(LIBFT_PATH) -lft
INC_LIBFT = -I$(LIBFT_PATH)/include/

#===========#
#_- Color -_#
#===========#

# color #
# red = 9
# hard_red = 196
# orange = 214
# violet = 140
# green = 47

TITLE_COLOR = 214
CLEAN_COLOR = 9
LINK_COLOR = 47
OBJ_COLOR = 47

MAKE_COLOR = 47
MAKE_ALREADY = 140
MAKE_FAIL = 9

NORME_COLOR = 47
NORME_COLOR_ERR = 9
NORME_COLOR_WAR = 196

#==============#
#_- Fonction -_#
#==============#

cmd_make = echo "\033[38;5;$(MAKE_COLOR)m$(MAKE) $(1)\033[0m"; \
		   $(MAKE) $(1)

cmd_color = echo "\033[38;5;$(1)m$(2)\033[0m"; \
			$(2)

put_title = echo "\033[38;5;$(TITLE_COLOR)m[ $(1) ]\033[0m"

#==================#
#_- Source Files -_#
#==================#
SRC_NAME = main.c \
		   ft_printf.c \
		   ft_printf_s.c \
		   ft_printf_d.c \
		   ft_printf_p.c \
		   ft_printf_x.c \
		   ft_printf_grx.c \
		   ft_printf_o.c \
		   ft_printf_u.c \
		   ft_printf_c.c \
		   ft_printf_grd.c \
		   ft_printf_gro.c \
		   ft_printf_gru.c \

OBJ_NAME = $(SRC_NAME:.c=.o)

SRC = $(addprefix $(SRC_PATH), $(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))

INC = $(addprefix -I, $(INC_PATH)) $(INC_LIBFT)

LDFLAGS = $(addprefix -L, $(LIB_PATH)) $(LIBFT)

#===========#
#_- Rules -_#
#===========#
all: $(NAME)

#	linking
$(OBJ_PATH)%.o:  $(SRC_PATH)%.c
	@$(call cmd_color,$(LINK_COLOR),$(CC) $(CFLAGS) $(INC) -o $@ -c $<)

#	preLinking
$(OBJ_PATH):
	@$(call put_title,Linking)
	@mkdir -p $(OBJ_PATH)

#	Object Compiation
$(NAME): $(OBJ_PATH) $(OBJ)
	@$(call put_title,Compilation)
	@$(call cmd_make,$(LIBFT_PATH))
	@$(call cmd_color,$(OBJ_COLOR),$(CC) $(LDFLAGS) $(OBJ) -o $@)

#	Removing object
clean:
	@$(call put_title,Cleaning)
	@$(RM) $(OBJ_PATH)
	@$(call cmd_color,$(CLEAN_COLOR),rm -rf $(OBJ))

#	Removeing binary
fclean : clean
	@$(RM) $(NAME)
	@$(call cmd_color,$(CLEAN_COLOR),rm -rf $(NAME))

re: fclean all

#	check norme for includes and ./srcs/ files
norme:
	@norminette $(SRC) $(INC_PATH) | sed "s/Norme/[0;1;47m\
	[0;38;5;$(NORME_COLOR)mNorme/g; s/Warning/[38;5;$(NORME_COLOR_WAR)m\
	Warning/g; s/Error/\[38;5;$(NORME_COLOR_ERR)m Error/g"

#	run the program
run: all
	@echo "\033[38;5;214mRuning Test:\033[0m"
	@./$(NAME)

.PHONY: all clean fclean re norme run
