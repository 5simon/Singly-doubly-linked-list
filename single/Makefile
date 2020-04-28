DEBUG ?= 1
ifeq ($(DEBUG), 1)
    CFLAGS = -g3
	EXECUTABLE = MainDebug
else
    CFLAGS = -O2
	EXECUTABLE = MainRelease
endif

CC = gcc $(CFLAGS)
OBJECTS = Main.o SingleLinkedList.o

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) -c $<