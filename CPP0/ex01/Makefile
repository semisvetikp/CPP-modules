SRCS	=  phonebook.cpp contact.cpp main.cpp

CXX		= g++
CPPFLAGS	= -Wall -Wextra -Werror

OBJ = $(SRCS:.cpp=.o)

NAME = phonebook

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