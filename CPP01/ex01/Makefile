NAME = Moar_brainz!
CC = c++
CCFLAGS = -Wall -Wextra -Werror -std=c++98

COLOR_GREEN = \033[0;32m
COLOR_RESET = \033[0m

SRC_DIR = ./src
SRC = $(shell find $(SRC_DIR) -type f -name "*.cpp")
OBJ = $(SRC:.cpp=.o)

all: $(NAME)
	@echo "$(COLOR_GREEN)------------ PROCESS FINISHED ------------$(COLOR_RESET)"

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CCFLAGS) -c $< -o $@
	@echo "$(COLOR_GREEN)------------ MESSAGE: $@ COMPILED ------------$(COLOR_RESET)"

clean:
	@rm -f $(OBJ)
	@echo "$(COLOR_GREEN)------------ MESSAGE: CLEANING COMPLETED ------------$(COLOR_RESET)"

fclean:
	@rm -f $(OBJ)
	@rm -f $(NAME)
	@echo "$(COLOR_GREEN)------------ MESSAGE: FCLEANING COMPLETED ------------$(COLOR_RESET)"

re: fclean all

.PHONY: all clean fclean re