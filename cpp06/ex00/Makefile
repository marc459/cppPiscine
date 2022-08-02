# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marcos <marcos@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/17 19:06:31 by msantos-          #+#    #+#              #
#    Updated: 2022/08/02 22:43:29 by marcos           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#PROGRAMS
PROGRAM = ex00

#PATHS
OBJ_PATH = ./objs
SRC_PATH = .
INCLUDES = -I ./includes

#SRCS
PROGRAM_SRCS = main.cpp FtString.cpp


#OBJS
PROGRAM_OBJS = $(addprefix $(OBJ_PATH)/,$(PROGRAM_SRCS:.cpp=.o))

#FLAGS
CXX = clang++
#clang 
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

#INSTRUCTIONS
all: $(PROGRAM)

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.cpp
	mkdir -p $(OBJ_PATH) 2> /dev/null || true
	$(CXX) $(CXXFLAGS) -o $@ -c $^

$(PROGRAM): $(PROGRAM_OBJS)
	$(CXX) $(INCLUDES) $(PROGRAM_OBJS) -o $(PROGRAM)
clean:
		@rm -rf $(OBJ_PATH)

fclean: clean
		@rm -rf $(PROGRAM) $(CLIENT)

re: fclean all

