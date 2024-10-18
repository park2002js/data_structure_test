CC = gcc
CFLAGS = -Wall -g

#
main: main.o insertion.o bubble.o selection.o common.o test.o
	$(CC) -o main main.o insertion.o bubble.o selection.o common.o test.o

insertion.o: insertion.c
	$(CC) $(CFLAG) -c insertion.c

bubble.o: bubble.c
	$(CC) $(CFLAG) -c bubble.c

selection.o: selection.c
	$(CC) $(CFLAG) -c selection.c

common.o: common.c
	$(CC) $(CFLAG) -c common.c

test.o: test.c
	$(CC) $(CFLAG) -c test.c

clean:
	rm -f sort *.o *.exe 
