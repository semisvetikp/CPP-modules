SRC	=  main.cpp

CXX		= clang++
CPPFLAGS	= -Wall -Wextra -Werror

OBJ = $(SRC:.cpp=.o)

NAME = convert

RM   =  rm -f

.cpp.o:
	$(CXX) $(CPPFLAGS) -c $< -o $(<:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) 
		$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean: 
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re