release: Main.o SingleLinkedList.o
	gcc Main.o SingleLinkedList.o -O3 -o Single.o

debug: Main.o SingleLinkedList.o
	gcc Main.o SingleLinkedList.o -g3 -o Single.o

Main.o: Main.c
	gcc -c Main.c -O3

SingleLinkedList.o: SingleLinkedList.c 
	gcc -c SingleLinkedList.c -O3

clean:
	rm *.o