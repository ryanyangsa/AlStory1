.DEFAULT_GOAL := all

CC = gcc
CFLAGS = -g -Wall -pedantic

all: selectionSort.o mainSelectionSort.o
	$(CC) $(CFLAGS) -o mainSelectionSort selectionSort.o mainSelectionSort.o

selectionSort.o: selectionSort.c
	$(CC) $(CFLAGS) -c selectionSort.c

mainSelectionSort.o: mainSelectionSort.c
	$(CC) $(CFLAGS) -c mainSelectionSort.c

clean: 
	rm -rf *.o mainSelectionSort
