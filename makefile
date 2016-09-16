Avatar:	main.o Guerrero.o Airbender.o Firebender.o Waterbender.o Earthbender.o
	g++ main.o Guerrero.o Airbender.o Firebender.o Waterbender.o Earthbender.o -o Avatar

main.o:	main.cpp Guerrero.h Airbender.h Earthbender.h Firebender.h Waterbender.h
	g++ -c main.cpp

Earthbender.o:	Earthbender.cpp Earthbender.h Guerrero.h
	g++ -c Earthbender.cpp

Waterbender.o: Waterbender.cpp Waterbender.h Guerrero.h
	g++ -c Waterbender.cpp

Firebender.o: Firebender.cpp Firebender.h Guerrero.h
	g++ -c Firebender.cpp

Airbender.o:	Airbender.cpp Airbender.h Guerrero.h
	g++ -c Airbender.cpp

Guerrero.o:	Guerrero.h Guerrero.cpp
	g++ -c Guerrero.cpp

clean:
	rm -f *.o temp
