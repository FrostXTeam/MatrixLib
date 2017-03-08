#Make by Lucas Barbosa for you :)

CXX_FLAGS=-g -O -Wall -std=c++14 -pedantic
# W(arning)all, W(arning)error, std=c++14(C++14 Compiler support), -Pedantic(ISO error mode)
CXX_COMP=g++
# Compiler will be the GNU G++

# global file selector wildcards
MAIN_SRC=$(wildcard *.cpp)
MAIN_O=frostx 
OBJ_FILES=$(wildcard *.o)

def_comp:
	$(CXX_COMP) $(CXX_FLAGS) $(MAIN_SRC) -o $(MAIN_O)

run:
	./$(MAIN_O)

clean: $(MAIN_O)
	rm -r  $(MAIN_O) $(OBJ_FILES)

wipe: $(MAIN_SRC)
	rm -r $(MAIN_SRC)

# Custom targets and receipes

test: $(MAIN_O)
	# Stub for the lexer | Lucas | MatrixLib 
	./$(MAIN_O) test.lang
