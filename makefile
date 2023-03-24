sample: sample.o imageio.o
	g++ -o sample sample.o imageio.o

main: main.o functions.o imageio.o
	g++ -o main main.o functions.o imageio.o

main.o: main.cpp imageio.h tasks.cpp
	g++ -c main.cpp

tasks.o: main.cpp imageio.h tasks.cpp



clean: rm-f main.o sample.o tasks.o