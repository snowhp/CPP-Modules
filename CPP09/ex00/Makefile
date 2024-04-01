# Source Files
SRCS = main.cpp BitcoinExchange.cpp

# Source Files Prefix
SRCS := $(addprefix src/, $(SRCS))
# Include Folder
INCLUDES = "./inc"

# Objects Files
OBJS = $(SRCS:.cpp=.o)

# Name Of The Compiled Program
NAME = btc

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
