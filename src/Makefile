CC = gcc
CFLAGS = -Wall -g
TARGET = main

all: $(TARGET)

$(TARGET): main.c terminal_animation.c
	$(CC) $(CFLAGS) -o ../bin/$(TARGET) main.c terminal_animation.c

clean:
	rm -f ../bin/$(TARGET)
