NAME = PhoneBook

SRC = main.cpp \
	  Contact.cpp \
	  Add_Search.cpp \

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98


OBJ = ${SRC:.cpp=.o}

all: ${NAME}


${NAME}: ${OBJ}
	$(CXX) ${CXXFLAGS} $(OBJ) -o ${NAME}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all
