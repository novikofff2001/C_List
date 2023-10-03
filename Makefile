# Variables
CC = gcc
CFLAGS = -Wall -Wextra
OBJ_NAME = main

all: $(OBJ_NAME)

$(OBJ_NAME): main.o List.o ListNode.o
	$(CC) main.o List.o ListNode.o -o $(OBJ_NAME)

main.o: main.c
	$(CC) $(CFLAGS) -c main.c -o main.o

ListNode.o: ListNode.c ListNode.h
	$(CC) $(CFLAGS) -c ListNode.c -o ListNode.o

List.o: List.c List.h
	$(CC) $(CFLAGS) -c List.c -o List.o

clean:
	rm -f *.o $(OBJ_NAME)