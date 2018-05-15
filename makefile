CC=gcc
CFLAGS=-I.
SRC = ./Sources
TESTS = ./Tests

all: exec_alloc2D acronym

build: exec_alloc2D acronym bitOperations

rebuild: clean build

exec_alloc2D: $(SRC)/alloc2Darray.o $(TESTS)/test_alloc2Darray.o
	gcc -o exec_alloc2D $(SRC)/alloc2Darray.o $(TESTS)/test_alloc2Darray.o	-I.
	mkdir -p Output
	mv $(SRC)/alloc2Darray.o $(TESTS)/test_alloc2Darray.o ./Output
	mv exec_alloc2D ./Output
acronym: $(SRC)/acronym.o $(TESTS)/test_acronym.o
	gcc -o exec_acronym $(SRC)/acronym.o $(TESTS)/test_acronym.o	-I.
	mkdir -p Output
	mv $(SRC)/acronym.o $(TESTS)/test_acronym.o ./Output
	mv exec_acronym ./Output
bitOperations: $(SRC)/BitwiseOperations.o $(TESTS)/test_BitwiseOperations.o
	gcc -o exec_BitwiseOperations $(SRC)/BitwiseOperations.o $(TESTS)/test_BitwiseOperations.o	-I.
	mkdir -p Output
	mv $(SRC)/BitwiseOperations.o $(TESTS)/test_BitwiseOperations.o ./Output
	mv exec_BitwiseOperations ./Output

clean:
	rm -r Output