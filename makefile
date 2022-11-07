CC=g++ -g 
exe=prog

$(exe): shape.o application.cpp
	$(CC) shape.o application.cpp -o $(exe)

shape.o: shape.cpp shape.h
	$(cc) -c shape.cpp

clean:
	rm  -f *.o $(exe)