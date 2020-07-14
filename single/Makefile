release: Main.o SingleLinkedList.o
	gcc Main.o SingleLinkedList.o -o Single.o

debug: Main.o SingleLinkedList.o
	gcc Main.o SingleLinkedList.o -g3 -o Single.o

Main.o: Main.c
	gcc -c Main.c

SingleLinkedList.o: SingleLinkedList.c 
	gcc -c SingleLinkedList.c

clean:
	rm *.o