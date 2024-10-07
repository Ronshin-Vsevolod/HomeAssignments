start: Calculator.o Calc.o
	g++ Calculator.o Calc.o -o start.app

Calculator.o: Calculator.cpp
	g++ -c Calculator.cpp
Calc.o: Calc.cpp Calculator.h
	g++ -c Calc.cpp

clean:
	rm Makefile.swp *.o start.app

