CC = g++

INCLUDE = -I./homework3

BIN = ./bin
UTIL = ./util
LIB = ./lib
SRC = ./src

all: hw3

hw3: ${LIB}/hw3.o ${LIB}/xrange.o ${LIB}/y1.o ${LIB}/y2.o
	${CC} -std=c++11 -o $@ $^ ${INCLUDE}

${LIB}/hw3.o: ${UTIL}/HW3.cxx
	${CC} -std=c++11 -c -o $@ $^ ${INCLUDE}

${LIB}/xrange.o: ${SRC}/xrange.cxx
	${CC} -std=c++11 -c -o $@ $^ ${INCLUDE}

${LIB}/y1.o: ${SRC}/y1.cxx
	${CC} -std=c++11 -c -o $@ $^ ${INCLUDE}

${LIB}/y2.o: ${SRC}/y2.cxx
	${CC} -std=c++11 -c -o $@ $^ ${INCLUDE}

clean:
	rm ${LIB}/*.o ${BIN}/hw3

