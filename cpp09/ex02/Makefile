# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/01 21:13:38 by msantos-          #+#    #+#              #
#    Updated: 2023/05/01 21:13:58 by msantos-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#PROGRAMS
PROGRAM = PmergeMe

#PATHS
OBJ_PATH = ./objs
SRC_PATH = .
INCLUDES = -I ./includes

#SRCS
PROGRAM_SRCS = PmergeMe.cpp main.cpp


#OBJS
PROGRAM_OBJS = $(addprefix $(OBJ_PATH)/,$(PROGRAM_SRCS:.cpp=.o))

#FLAGS
CXX = clang++
#clang 
CXXFLAGS = -Wall -Werror -Wextra -std=c++98 #-stdlib=libc++

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

