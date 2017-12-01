
CC = g++

DEBUG = -g

CFLAGS = -c -Wall $(DEBUG)

TARGET = main

all: $(TARGET)

$(TARGET): main.o
	$(CC) main.o -o $(TARGET)
main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp
clean:
	rm *.o *~ $(TARGET)
