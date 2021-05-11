HEADER_C = contact.hpp
HEADER_P = phonebook.hpp
SRCS	=  phonebook.cpp contact.cpp main.cpp

CXX		= clang++
CPPFLAGS	= -Wall -Wextra -Werror

OBJ = $(SRCS:.cpp=.o)

NAME = phonebook

RM   =  rm -f

%.o: %.cpp $(HEADER_C) $(HEADER_P)
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