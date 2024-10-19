start: Transformers.o TransformerClass.o AutobotClass.o DecepticonClass.o DinobotClass.o
	g++ Transformers.o TransformerClass.o AutobotClass.o DecepticonClass.o DinobotClass.o -o start.app

TransformerClass.o: TransformerClass.cpp Transformer.h
	g++ -c TransformerClass.cpp
AutobotClass.o: AutobotClass.cpp Autobot.h
	g++ -c AutobotClass.cpp
DecepticonClass.o: DecepticonClass.cpp Decepticon.h
	g++ -c DecepticonClass.cpp
DinobotClass.o: DinobotClass.cpp Dinobot.h
	g++ -c DinobotClass.cpp

clean:
	rm *.o start.app
