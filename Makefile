main: main.o Test.o
	g++ -g -Wall -std=c++11 main.o Test.o -o main

main.o: main.cpp Test.h LinkedList.h Node.h
	g++ -g -Wall -std=c++11 -c main.cpp

Test.o: Test.h Test.cpp Node.h LinkedList.h
	g++ -g -Wall -std=c++11 -c Test.cpp

clean:
	rm *.o main
