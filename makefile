CC = gcc
CFLAGS = -Wall -g

#
main: main.o insertion.o bubble.o selection.o etc.o
	$(CC) -o main main.o insertion.o bubble.o selection.o etc.o 

insertion.o: insertion.c
	$(CC) $(CFLAG) -c insertion.c

bubble.o: bubble.c
	$(CC) $(CFLAG) -c bubble.c

selection.o: selection.c
	$(CC) $(CFLAG) -c selection.c

etc.o: etc.c
	$(CC) $(CFLAG) -c etc.c

clean:
	rm -f sort *.o *.exe 
