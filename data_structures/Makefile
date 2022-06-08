CC=gcc
LD=gcc

CFLAGS=-Wall -Wextra -Werror -pedantic -g -O0
LFLAGS=-lm -g

VFLAGS=--leak-check=full --show-leak-kinds=all --track-origins=yes

OBJS=linked_list.o
TARGET=a.out

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

all: $(OBJS)
	$(LD) $(LFLAGS) $(OBJS) -o $(TARGET)

clean:
	rm -rf $(OBJS) $(TARGET) 

run:
	./$(TARGET)

zip:
	zip -r $(TARGET).zip Makefile *.h *.c
