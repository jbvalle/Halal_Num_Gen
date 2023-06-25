CC = gcc

TARGET = main

SRC:=$(wildcard *.c)

all: $(TARGET)
	
$(TARGET): $(SRC)
	$(CC) -g -o $@ $^

run: FORCE
	./$(TARGET)

clean: FORCE
	rm -rf $(TARGET) *.json

FORCE:
