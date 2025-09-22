NAME	=	Human
CC		=	@c++
AR		=	@ar rcs
CFLAGS	=	-Werror -Wextra -Wall -std=c++98 -MMD -MP -g
VLGRIND =	--leak-check=full --show-leak-kinds=all --track-fds=yes --track-origins=yes

BIN_DIR	=	bin/
SRC_DIR	=	src/
INC_DIR	=	inc/
OBJ_DIR	=	obj/
DEP_DIR	=	dep/

SRC 	=	main.cpp \
			HumanA.cpp \
			HumanB.cpp \
			Weapon.cpp
SRCS	= $(addprefix $(SRC_DIR), $(SRC))
OBJS	= $(patsubst $(SRC_DIR)%, $(OBJ_DIR)%,$(SRCS:.cpp=.o))
DEPS	= $(patsubst $(SRC_DIR)%, $(DEP_DIR)%,$(SRCS:.cpp=.d))

INCS	= $(addprefix -I, $(INC_DIR))

RESET	= \033[0m
BOLD	= \033[1m
RED		= \033[31m
GREEN	= \033[32m
YELLOW	= \033[33m
BLUE	= \033[34m


all: $(BIN_DIR)$(NAME)

$(OBJ_DIR) $(DEP_DIR):
	@mkdir -p $@

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	@mkdir -p $(dir $@) $(dir $(DEP_DIR)$*.d)
	$(CC) $(CFLAGS) ${INCS} -c $< -o $@ -MF $(DEP_DIR)$*.d || { echo "$(RED)Failed to create obj/dep$(RESET)"; exit 1;}
	@echo "$(BOLD)$(YELLOW)File $< compiled$(RESET)"

$(BIN_DIR)$(NAME): $(OBJS)
	@echo "$(BOLD)$(YELLOW)Creating program$(RESET)"
	@mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) ${INCS} $(OBJS) -o $@ || { echo "$(RED)Failed to create program$(RESET)"; exit 1; }
	@echo "$(BOLD)$(GREEN)Program compiled succesfully$(RESET)"

clean:
	@if [ -d $(OBJ_DIR) ] || [ -d $(DEP_DIR) ]; then \
		echo "$(BOLD)$(YELLOW)Cleaning$(RESET)"; \
		rm -rf $(OBJ_DIR) $(DEP_DIR); \
		echo "$(BOLD)$(GREEN)Clean$(RESET)"; \
	else \
		echo "$(BOLD)$(BLUE)No objs or deps to clean$(RESET)"; \
	fi

fclean: clean
	@rm -rf $(BIN_DIR)
	
re: fclean all

.PHONY: all re clean fclean

-include ${DEPS}
