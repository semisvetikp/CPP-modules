HEADER = replace.h
SRCS	=  main.cpp

CXX		= clang++
CPPFLAGS	= -Wall -Wextra -Werror

OBJ = $(SRCS:.cpp=.o)

NAME = replace

RM   =  rm -f

%.o: %.cpp $(HEADER)
	$(CXX) $(CPPFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ) 
		$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean: 
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re