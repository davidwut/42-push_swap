NAME			:= push_swap
CHECKER_NAME	:= checker

CC				:= gcc
CFLAGS			:= -Wall -Wextra -Werror
RM				:= rm -f

LIBFT_NAME		:= libft.a
LIBFT_DIR		:= libft
LIBFT			:= $(LIBFT_DIR)/$(LIBFT_NAME)

SRC_DIR			:= src
PUSH_SWAP_DIR	:= $(SRC)/push_swap
CHECKER_DIR		:= $(SRC)/checker
BUILD_DIR		:= build

PUSH_SWAP_SRCS	:= $(wildcard $(PUSH_SWAP_DIR)/*.c)
PUSH_SWAP_OBJS	:= $(PUSH_SWAP_SRCS:%=$(BUILD_DIR)/%.o)

CHECKER_SRCS	:= $(wildcard $(CHECKER_DIR)/*.c)
CHECKER_OBJS	:= $(CHECKER_SRCS:%=$(BUILD_DIR)/%.o)

all:				$(LIBFT) $(NAME)

$(LIBFT):
					$(MAKE) -C $(LIBFT_DIR)

$(NAME):			$(PUSH_SWAP_OBJS)
					$(CC) $(CFLAGS) $(PUSH_SWAP_OBJS) -o $@ $(LIBFT)

$(BUILD_DIR)/%.c.o:	%.c
					@mkdir -p $(dir  $@)
					$(CC) $(CFLAGS) -c $< -o $@

bonus:				$(LIBFT) $(CHECKER_NAME)

$(CHECKER_NAME):	$(CHECKER_OBJS)
					$(CC) $(CFLAGS) $(CHECKER_OBJS) -o $@ $(LIBFT)

both:				all bonus

clean:
					$(RM) $(BUILD_DIR)

fclean:				clean
					$(RM) $(NAME) $(CHECKER_NAME)

re:					fclean all

.PHONY: all clean fclean re bonus both
