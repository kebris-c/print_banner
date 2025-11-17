# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kebris-c <kebris-c@student.42madrid.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/17 18:07:55 by kebris-c          #+#    #+#              #
#    Updated: 2025/11/17 18:15:58 by kebris-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -------------------------
# Variables
# -------------------------
NAME		= bin/banner.a
SRC_DIR		= src/
INCL_DIR	= include/
OBJS_DIR	= objs/
DEPS_DIR	= deps/
BIN_DIR		= bin/
SRCS		:= $(wildcard $(SRC_DIR)*.c)
OBJS		:= $(patsubst $(SRC_DIR)%.c, $(OBJS_DIR)%.o, $(SRCS))
DEPS		:= $(patsubst $(OBJS_DIR)%.o, $(DEPS_DIR)%.d, $(OBJS))

CC			= cc
CFLAGS		= -Wall -Wextra -Werror
AR			= ar rcs
RM			= rm -rf

HEADERS		= -I$(INCL_DIR) -Ilibft/include

# -------------------------
# Default rule
# -------------------------
.DEFAULT_GOAL := all

all: $(NAME)

# -------------------------
# Compile objects
# -------------------------
$(OBJS_DIR)%.o: $(SRC_DIR)%.c | $(OBJS_DIR) $(DEPS_DIR)
	@echo "🔨 Compiling $<..."
	@$(CC) $(CFLAGS) $(HEADERS) -MMD -MP -c $< -o $@

# -------------------------
# Create library
# -------------------------
$(NAME): $(OBJS)
	@mkdir -p $(dir $@)
	@$(AR) $@ $(OBJS)
	@echo "✅ Library $@ created."

# -------------------------
# Directories
# -------------------------
$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)

$(DEPS_DIR):
	@mkdir -p $(DEPS_DIR)

# -------------------------
# Clean
# -------------------------
clean:
	@$(RM) $(OBJS_DIR) $(DEPS_DIR)

fclean: clean
	@$(RM) $(BIN_DIR)

re: fclean all

# -------------------------
# Include dependencies
# -------------------------
-include $(DEPS)
