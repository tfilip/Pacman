#Declararea variabile
CC = gcc
CFLAGS = -Wall

EXEC1 = task1
EXEC2 = pacman

SRC1 := $(EXEC1).c
SRC2 := $(EXEC2).c

OBJ1 := $(EXEC1).o
OBJ2 := $(EXEC2).o

build: $(EXEC1) $(EXEC2)

$(EXEC1): $(OBJ1)
	$(CC) $(CFLAGS) $^ -o $@


$(EXEC2): $(OBJ2)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJ1): $(SRC1)
	$(CC) $(CFLAGS) $^ -c

$(OBJ2): $(SRC2)
	$(CC) $(CFLAGS) $^ -c

.PHONY: clean
clean:
	rm -f $(EXEC1) $(EXEC2) $(OBJ1) $(OBJ2) *~