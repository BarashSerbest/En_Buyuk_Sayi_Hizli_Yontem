#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 10000

int main() 
{
    int array[ARRAY_SIZE];
    int max = array[0];
    int i;

    srand(time(NULL)); // Rastgele sayi atama
    for(i = 0; i < ARRAY_SIZE; i++) 
	{
        array[i] = rand();
    }

    for(i = 1; i < ARRAY_SIZE; i++) // En buyuk sayiyi bulma
	{
        if(array[i] > max) {
            max = array[i];
        }
    }

    printf("En buyuk sayi: %d\n", max);

    return 0;
}
