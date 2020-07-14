release: Main.o DoubleLinkedList.o
	gcc Main.o DoubleLinkedList.o -o Double.o

debug: Main.o DoubleLinkedList.o
	gcc Main.o DoubleLinkedList.o -g3 -o Double.o

Main.o: Main.c
	gcc -c Main.c

DoubleLinkedList.o: DoubleLinkedList.c 
	gcc -c DoubleLinkedList.c

clean:
	rm *.o