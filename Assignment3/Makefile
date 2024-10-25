CXX = g++
CXXFLAGS = -Wall -g -pthread

SRCS = Transformers.cpp \
       TransformerClass.cpp \
       AutobotClass.cpp \
       DecepticonClass.cpp \
       DinobotClass.cpp

OBJS = $(SRCS:.cpp=.o)

TARGET = transformers

TEST_SRC = GoogleTest.cpp
TEST_OBJ = $(TEST_SRC:.cpp=.o)
TEST_TARGET = gtest-run

GTEST_LIBS = -lgtest -lgtest_main

all: $(TARGET) $(TEST_TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(TEST_TARGET): $(TEST_OBJ) TransformerClass.o AutobotClass.o DecepticonClass.o DinobotClass.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(GTEST_LIBS)

clean:
	rm -f $(OBJS) $(TARGET) $(TEST_OBJ) $(TEST_TARGET)

.PHONY: all clean
