CXX			=	clang++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

NAME	=	span
FILES	=	main.cpp Span.cpp

OBJ		=	$(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp %.hpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJ) $(wildcard *.gch)

fclean: clean
	$(RM) $(NAME)

re: fclean all