#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    clock_t start = clock();

    FILE* fp = fopen("numbers.csv","r");
    char numbers[1024];
    if(!fp)
        printf("no file\n");
    
    while (fgets(numbers,999,fp))
    {
        puts(numbers);
    }
    fclose(fp);
    printf("it takes %.2fms to insert 1000 elements in array\n", (double)(clock() - start) / (CLOCKS_PER_SEC / 1000));

    return 0;
}