start: Transformers.o TransformerClass.o AutobotClass.o DecepticonClass.o WeaponClass.o
	g++ Transformers.o TransformerClass.o AutobotClass.o DecepticonClass.o WeaponClass.o -o start.app

TransformerClass.o: TransformerClass.cpp Transformer.h
	g++ -c TransformerClass.cpp
AutobotClass.o: AutobotClass.cpp Autobot.h
	g++ -c AutobotClass.cpp
DecepticonClass.o: DecepticonClass.cpp Decepticon.h
	g++ -c DecepticonClass.cpp
WeaponClass.o: WeaponClass.cpp Weapon.h
	g++ -c WeaponClass.cpp

clean:
	rm *.o start.app
