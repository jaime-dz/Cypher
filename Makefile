CC = g++
CFLAGS = -I include -Wall
SRC = src/cypher.cpp
TARGET = cypher

all:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)