# Source Files
SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp\

# Source Files Prefix
SRCS := $(addprefix src/, $(SRCS))
# Include Folder
INCLUDES = "./inc"

# Objects Files
OBJS = $(SRCS:.cpp=.o)

# Name Of The Compiled Program
CURRENT_DIR := $(shell basename $(CURDIR))
NAME = $(CURRENT_DIR)

# Compilation Program
CXX = c++
# Compilation Flags
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -I$(INCLUDES)

# Remove Files Command
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

debug: CXXFLAGS += -g -fsanitize=address
debug: fclean $(NAME)

%.o: %.c
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all