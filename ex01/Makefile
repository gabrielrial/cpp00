NAME = phonebook

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCE = phonebook.cpp

all: $(NAME)

$(NAME): $(SOURCE)
	$(CPP) $(CPPFLAGS) $(SOURCE) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: clean all