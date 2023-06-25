CC = gcc

TARGET = main

SRC:=$(wildcard *.c)

all: $(TARGET)
	
$(TARGET): $(SRC)
	$(CC) -g -o $@ $^

run: 
	./$(TARGET)

clean:
	rm -rf $(TARGET) *.json
