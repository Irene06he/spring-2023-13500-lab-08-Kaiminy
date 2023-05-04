main: main.o tasks.o imageio.o
	g++ -o main main.o tasks.o imageio.o

sample: sample.o imageio.o
	g++ -o sample sample.o imageio.o

main.o: main.cpp tasks.h

tasks.o: tasks.cpp imageio.h tasks.h

sample.o: sample.cpp imageio.h

imageio.o: imageio.cpp imageio.h


clean:
	rm -f sample.o imageio.o main.o tasks.o
