##
## Makefile for ex in /home/letohi_f/
## 
## Made by florian letohic
## Login   <letohi_f@epitech.net>
## 
## Started on  Mon Jan 14 09:33:44 2013 florian letohic
## Last update Fri Feb 22 04:53:01 2013 florian letohic
##

NAME	=	AVM

SRCS	=	main.cpp \
		Stack.cpp \

OBJS	=	$(SRCS:.c=.o)

CC	=	g++

RM	=	rm -f

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) -c $(NAME) $(OBJS) -Wall -Wextra -Werror
clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all