BMI: a.o main.o
	g++ -o BMI main.o a.o

a.o: a.cpp a.h
	g++ -c a.cpp

main.o: main.cpp a.h
	g++ -c main.cpp

clean:
	rm BMI *.o
