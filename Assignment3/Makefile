start: Transformers.o TransformerClass.o AutobotClass.o DecepticonClass.o WeaponClass.o
	g++ Transformers.o TransformerClass.o AutobotClass.o DecepticonClass.o WeaponClass.o -o start.app

TransformerClass.o: TransformerClass.cpp
	g++ -c TransformerClass.cpp
AutobotClass.o: AutobotClass.cpp
	g++ -c AutobotClass.cpp
DecepticonClass.o: DecepticonClass.cpp
	g++ -c DecepticonClass.cpp
WeaponClass.o: WeaponClass.cpp
	g++ -c WeaponClass.cpp

clean:
	rm *.o start.app
