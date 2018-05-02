CC=gcc
CFLAGS=-I.
SOURCES = ./Sources
TESTS = ./Tests

all: exec_alloc2D

exec_alloc2D: $(SOURCES)/alloc2Darray.o $(TESTS)/test_alloc2Darray.o
	gcc -o exec_alloc2D $(SOURCES)/alloc2Darray.o $(TESTS)/test_alloc2Darray.o
	mkdir -p Output
	mv $(SOURCES)/alloc2Darray.o $(TESTS)/test_alloc2Darray.o ./Output
	mv exec_alloc2D ./Output
clean:
	rm -r Output