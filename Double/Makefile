release: Main.o DoubleLinkedList.o
	gcc Main.o DoubleLinkedList.o -O3 -o Double.o

debug: Main.o DoubleLinkedList.o
	gcc Main.o DoubleLinkedList.o -g3 -o Double.o

Main.o: Main.c
	gcc -c Main.c -O3

DoubleLinkedList.o: DoubleLinkedList.c
	gcc -c DoubleLinkedList.c -O3

clean:
	rm *.o