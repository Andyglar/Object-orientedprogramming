all: main.o student.o store.o secretdoor.o level.o equestion.o question.o
	g++ main.o student.o store.o secretdoor.o level.o equestion.o question.o -o app

main.o: main.cpp
	g++ -c main.cpp

student.o: student.h student.cpp
	g++ -c student.cpp

store.o: store.h store.cpp
	g++ -c store.cpp

secretdoor.o: secretdoor.h secretdoor.cpp
	g++ -c secretdoor.cpp

level.o: level.h level.cpp
	g++ -c level.cpp

question.o: question.h question.cpp
	g++ -c question.cpp

equestion.o: equestion.h equestion.cpp
	g++ -c equestion.cpp

clean:
	rm *.o app