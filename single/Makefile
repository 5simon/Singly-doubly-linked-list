release: Main.o DynamicArray.o
	gcc Main.o DynamicArray.o -o MainRelease

debug: Main.o DynamicArray.o
	gcc Main.o DynamicArray.o -g3 -o MainDebug

Main.o: Main.c
	gcc -c Main.c

DynamicArray.o: DynamicArray.c 
	gcc -c DynamicArray.c

clean:
	rm *.o