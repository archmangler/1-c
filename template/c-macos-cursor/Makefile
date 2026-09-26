CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -g -O0
LDFLAGS =

TARGET = main
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

.PHONY: all clean run

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET) $(OBJ)
	rm -rf $(TARGET).dSYM
