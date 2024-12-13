PROJECT = template

TESTPROJECT = test-$(PROJECT)

CXX = g++

CXXFLAGS = -I. -std=c++17 -Werror -Wpedantic -Wall -g -fPIC

LDGTESTFLAGS = $(CXXFLAGS) -lgtest -lgtest_main -lpthread

DEPS=$(wildcard *.h)

OBJ=Main.o 

TEST-OBJ=GoogleTest.o

.PHONY: default

default: all;

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

$(PROJECT): Main.o
	$(CXX) -o $@ Main.o


$(TESTPROJECT): $(TEST-OBJ)
	$(CXX) -o $@ $(TEST-OBJ) $(LDGTESTFLAGS)

test: $(TESTPROJECT)
	.test-/$(TESTPROJECT)
	
all: $(PROJECT)

.PHONY: clean

clean:
	rm -f *.o

cleanall: clean
	rm -f $(PROJECT)
	rm -f $(TESTPROJECT)
