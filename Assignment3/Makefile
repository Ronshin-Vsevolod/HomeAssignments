PROJECT = transformers

LIBPROJECT = lib$(PROJECT).a

TESTPROJECT = test-$(PROJECT)

CXX = g++

A = ar

AFLAGS = rsv

CXXFLAGS = -Iinclude -std=c++17 -Wall -g -fPIC

LDXXFLAGS = $(CXXFLAGS) -L. -l:$(LIBPROJECT)

LDGTESTFLAGS = $(LDXXFLAGS) -lgtest -lgtest_main -lpthread

DEPS = $(wildcard include/*.h)

SRC = $(wildcard /home/vsevolod-ronshin/HomeAssignments/Assignment3/*.cpp)
OBJ = $(SRC:.cpp=.o)

TEST_SRC = $(wildcard tests/*.cpp)
TEST_OBJ = $(TEST_SRC:.cpp=.o)

.PHONY: default

default: all

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

$(LIBPROJECT): $(OBJ)
	$(A) $(AFLAGS) $@ $^

$(PROJECT): /home/vsevolod-ronshin/HomeAssignments/Assignment3/Transformers.o $(LIBPROJECT)
	$(CXX) -o $@ /home/vsevolod-ronshin/HomeAssignments/Assignment3/Transformers.o $(LDXXFLAGS)

$(TESTPROJECT): $(LIBPROJECT) $(TEST_OBJ)
	$(CXX) -o $@ $(TEST_OBJ) $(LDGTESTFLAGS)

test-run: $(TESTPROJECT)
	./$(TESTPROJECT)

transformers-run: $(PROJECT)
	./$(PROJECT)

all: $(PROJECT)

.PHONY: clean

clean:
	rm -f $(OBJ) $(TEST_OBJ)

cleanall: clean
	rm -f $(PROJECT)
	rm -f $(LIBPROJECT)
	rm -f $(TESTPROJECT)
