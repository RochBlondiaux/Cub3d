# COLORS
NOC         = \033[0m
BOLD        = \033[1m
UNDERLINE   = \033[4m
BLACK       = \033[1;30m
RED         = \033[1;31m
GREEN       = \033[1;32m
YELLOW      = \033[1;33m
BLUE        = \033[1;34m
VIOLET      = \033[1;35m
CYAN        = \033[1;36m
WHITE       = \033[1;37m

# SYMBOLS
INFO = $(BLUE)ℹ️  $(NOC)
SUCCESS = $(GREEN)✅  $(GREEN)
WARNING = $(YELLOW)⚠️  $(YELLOW)
ERROR = $(RED)❌  $(RED)

# Binary
NAME=cub3D

# Leaks cmd
LEAKS_CMD = valgrind --leak-check=yes

# Paths
SRC_PATH = ./srcs/
OBJ_PATH = ./objs/
INCDIR = includes

# Sources
SRC_NAME =	main.c \
			application/init.c \
			application/start.c \
			application/stop.c \
			parsing/parser.c \
			parsing/validator.c \
			vectors/vector2d.c \
			vectors/vector3d.c \
			utils/logger.c \

# Objects
OBJ_NAME = $(SRC_NAME:.c=.o)

# Files paths
SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))

# Libft
FT		= ./libft/
FT_LIB	= $(addprefix $(FT),libft.a)
FT_INC	= -I ./libft
FT_LNK	= -L ./libft -l ft

# Flags
CC = gcc $(CFLAGS)
CFLAGS = -Wall -Wextra -Werror -ofast -O3

all: obj $(FT_LIB) $(GLIB_LIB) $(MLX_LIB) $(NAME)

obj:
	@echo "$(INFO)Creating objects folder... $(NOC)"
	@mkdir -p $(OBJ_PATH)
	@mkdir -p $(OBJ_PATH)/graphics
	@mkdir -p $(OBJ_PATH)/application
	@mkdir -p $(OBJ_PATH)/vectors
	@mkdir -p $(OBJ_PATH)/parsing
	@mkdir -p $(OBJ_PATH)/utils
	@echo "$(SUCCESS)Objects folder created successfully$(NOC)"

$(OBJ_PATH)%.o:$(SRC_PATH)%.c
	@$(CC) $(CFLAGS) -I/usr/include -Imlx_linux $(FT_INC) -I $(INCDIR) -o $@ -c $<

$(FT_LIB):
	@echo "$(INFO)Building libft library...$(NOC)"
	@make -C $(FT)
	@echo "$(SUCCESS)Libft library built successfully!$(NOC)"

$(MLX_LIB):
	@echo "$(INFO)Building minilibx library...$(NOC)"
	@make -C $(MLX)
	@echo "$(SUCCESS)Minilibx library built successfully!$(NOC)"

$(NAME): $(OBJ)
	@echo "$(INFO)Building $(NAME)...$(NOC)"
	@$(CC) $(OBJ) $(FT_LNK) -Lmlx -lmlx -L/usr/lib -Imlx -lXext -lX11 -lm -lz -o $@
	@echo "$(SUCCESS)$(NAME) built successfully!$(NOC)"

clean:
	@echo "$(INFO)Deleting .o files...$(NOC)"
	@rm -rf $(OBJ_PATH)
	@echo "$(SUCCESS).o files deleted successfully!$(NOC)"
	@echo "$(INFO)Deleting libft files..."
	@make -C $(FT) clean
	@echo "$(SUCCESS)Libft files deleted successfully!$(NOC)"
	@echo "$(INFO)Deleting minilibx files..."
	@make -C $(MLX) clean
	@echo "$(SUCCESS)Minilibx files deleted successfully!$(NOC)"

fclean: clean
	@echo "$(INFO)Deleting $(NAME)...$(NOC)"
	@rm -rf $(NAME)
	@echo "$(SUCCESS)$(NAME) deleted successfully!$(NOC)"
	@make -C $(FT) fclean

re: fclean all

leaks: $(NAME)
	$(LEAKS_CMD) ./$(NAME)

run: $(NAME)
	@./$(NAME)

.PHONY:			all clean fclean re leaks run