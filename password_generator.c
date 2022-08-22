
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main() 
{ 
    int i; 
    char arr[93]; 
    srand(time(NULL)); 
    for (i = 33; i <= 126; i++) 
        arr[i - 33] = i; 
    for (i = 0; i < 93; i++) 
    { 
        int j = rand() % 93; 
        int temp = arr[i]; 
        arr[i] = arr[j]; 
        arr[j] = temp; 
    } 
    for (i = 0; i < 8; i++) 
        printf("%c", arr[i]); 
    return 0; 
}
