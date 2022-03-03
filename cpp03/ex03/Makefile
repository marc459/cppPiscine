# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marcos <marcos@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/17 19:06:31 by msantos-          #+#    #+#              #
#    Updated: 2022/03/03 17:06:25 by marcos           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#PROGRAMS
PROGRAM = ex03

#PATHS
OBJ_PATH = ./objs
SRC_PATH = .
INCLUDES = -I ./includes

#SRCS
PROGRAM_SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

#OBJS
PROGRAM_OBJS = $(addprefix $(OBJ_PATH)/,$(PROGRAM_SRCS:.cpp=.o))

#FLAGS
CXX = clang++ --std=c++98  -Wall -Werror -Wextra
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

