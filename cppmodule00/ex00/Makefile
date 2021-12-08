# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/17 19:06:31 by msantos-          #+#    #+#              #
#    Updated: 2021/12/08 21:42:22 by msantos-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#PROGRAMS
PROGRAM = ex00

#PATHS
OBJ_PATH = ./objs
SRC_PATH = .
INCLUDES = -I ./includes

#SRCS
PROGRAM_SRCS = megaphone.cpp

#OBJS
PROGRAM_OBJS = $(addprefix $(OBJ_PATH)/,$(PROGRAM_SRCS:.cpp=.o))

#FLAGS
CXX = clang++
#clang 
CXXFLAGS = -Wall -Werror -Wextra

#INSTRUCTIONS
all: $(PROGRAM)

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.cpp
	@mkdir -p $(OBJ_PATH) 2> /dev/null || true
	@$(CXX) -o $@ -c $^

$(PROGRAM): $(PROGRAM_OBJS)
	@$(CXX) $(CXXFLAGS) $(INCLUDES) $(PROGRAM_OBJS) -o $(PROGRAM)

clean:
		@rm -rf $(OBJ_PATH)

fclean: clean
		@rm -rf $(PROGRAM) $(CLIENT)

re: fclean all

