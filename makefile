CC=gcc
CFLAGS=-I.
SOURCES = ./Sources
TESTS = ./Tests

all: exec_alloc2D acronym

build: exec_alloc2D acronym bitOperations

rebuild: clean build

exec_alloc2D: $(SOURCES)/alloc2Darray.o $(TESTS)/test_alloc2Darray.o
	gcc -o exec_alloc2D $(SOURCES)/alloc2Darray.o $(TESTS)/test_alloc2Darray.o	-I.
	mkdir -p Output
	mv $(SOURCES)/alloc2Darray.o $(TESTS)/test_alloc2Darray.o ./Output
	mv exec_alloc2D ./Output
acronym: $(SOURCES)/acronym.o $(TESTS)/test_acronym.o
	gcc -o exec_acronym $(SOURCES)/acronym.o $(TESTS)/test_acronym.o	-I.
	mkdir -p Output
	mv $(SOURCES)/acronym.o $(TESTS)/test_acronym.o ./Output
	mv exec_acronym ./Output
bitOperations: $(SOURCES)/BitwiseOperations.o $(TESTS)/test_BitwiseOperations.o
	gcc -o exec_BitwiseOperations $(SOURCES)/BitwiseOperations.o $(TESTS)/test_BitwiseOperations.o	-I.
	mkdir -p Output
	mv $(SOURCES)/BitwiseOperations.o $(TESTS)/test_BitwiseOperations.o ./Output
	mv exec_BitwiseOperations ./Output

clean:
	rm -r Output