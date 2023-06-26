CC = gcc

TARGET = main

SRC:=$(wildcard *.c)

all: $(TARGET)
	
$(TARGET): $(SRC)
	$(CC) -g -o $@ $^ -DD10=1

d6: FORCE
	$(CC) -g -o $(TARGET) $(SRC) 
	./$(TARGET)

d10: FORCE
	$(CC) -g -o $(TARGET) $(SRC) -DD10=1
	./$(TARGET)

run: FORCE
	./$(TARGET)

clean: FORCE
	rm -rf $(TARGET) *.json

FORCE:
