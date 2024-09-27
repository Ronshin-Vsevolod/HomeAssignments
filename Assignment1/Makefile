output: Hello.o HelloWord.o
	g++ Hello.o HelloWord.o -o output.app

Hello.o: Hello.cpp
	g++ -c Hello.cpp
HelloWord.o: HelloWord.cpp Hello.h
	g++ -c HelloWord.cpp

clean:
	rm *.o output.app
