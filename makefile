main: main.o lab3.o
	g++ -o main main.o lab3.o
main.o:main.cpp lab3.h
	g++ -c main.cpp
lab3.o:lab3.cpp lab3.h
	g++ -c lab3.cpp

clean:
	rm main.o lab3.o

	
