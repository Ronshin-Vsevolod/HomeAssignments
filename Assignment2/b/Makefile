start: Calculator.o Calc.o
	g++ Calculator.o Calc.o -o start.app

Calculator.o: Calculator.cpp
	g++ -c Calculator.cpp
Calc.o: Calc.cpp Calc.h
	g++ -c Calc.cpp

clean:
	rm *.o start.app

