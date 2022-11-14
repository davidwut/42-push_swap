NAME			:= push_swap
CHECKER_NAME	:= checker

CC				:= gcc
CFLAGS			:= -Wall -Wextra -Werror -iquote include
RM				:= rm -rf

LIBFT_NAME		:= libft.a
LIBFT_DIR		:= libft
LIBFT			:= $(LIBFT_DIR)/$(LIBFT_NAME)

SRC_DIR			:= src
PUSH_SWAP_DIR	:= $(SRC_DIR)/push_swap
CHECKER_DIR		:= $(SRC_DIR)/checker
SHARED_DIR		:= $(SRC_DIR)/shared
BUILD_DIR		:= build

SHARED_SRCS		:= $(wildcard $(SHARED_DIR)/*.c)
SHARED_OBJS		:= $(SHARED_SRCS:%.c=$(BUILD_DIR)/%.o)

PUSH_SWAP_SRCS	:= $(wildcard $(PUSH_SWAP_DIR)/*.c)
PUSH_SWAP_OBJS	:= $(PUSH_SWAP_SRCS:%.c=$(BUILD_DIR)/%.o)

CHECKER_SRCS	:= $(wildcard $(CHECKER_DIR)/*.c)
CHECKER_OBJS	:= $(CHECKER_SRCS:%.c=$(BUILD_DIR)/%.o)

all:				$(LIBFT) $(NAME)

$(LIBFT):
					$(MAKE) -C $(LIBFT_DIR)

$(NAME):			$(PUSH_SWAP_OBJS) $(SHARED_OBJS)
					$(CC) $(CFLAGS) $(PUSH_SWAP_OBJS) $(SHARED_OBJS) -o $@ $(LIBFT)

$(BUILD_DIR)/%.o:	%.c
					@mkdir -p $(dir  $@)
					$(CC) $(CFLAGS) -c $< -o $@

bonus:				$(LIBFT) $(CHECKER_NAME)

$(CHECKER_NAME):	$(CHECKER_OBJS) $(SHARED_OBJS)
					$(CC) $(CFLAGS) $(CHECKER_OBJS) $(SHARED_OBJS) -o $@ $(LIBFT)

both:				all bonus

clean:
					$(RM) $(BUILD_DIR)

fclean:				clean
					$(RM) $(NAME) $(CHECKER_NAME)

re:					fclean all

.PHONY: all clean fclean re bonus both
