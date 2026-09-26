CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -g -O0
TARGET = main
SRC = main.c

.PHONY: all clean run

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)
