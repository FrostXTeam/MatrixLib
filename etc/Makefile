# Makefile by Lucas Barbosa
CXXFLAGS=-g -std=c++14 -Wall -Werror
CXX=gcc

MAIN_SRC=$(wildcard *.cpp)
OBJ_FILES=$(wildcard *.o)
MAIN_OBJ_FILE=main.o

def_comp:
	$(CXX) $(MAIN_SRC) $(CXXFLAGS) -o $(MAIN_OBJ_FILE)

run: 
	./$(OBJ_FILES)

clean:
	rm -r $(OBJ_FILES)
