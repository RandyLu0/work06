#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int a;
    srand(time(NULL));

    int arr[10];
    int tar[10];
    int *ap = arr;
    int *tp = tar;

    for(a = 0; a < 10; a++){
        arr[a] = rand();
    }
    arr[9] = 0;

    for(a = 0; a < 10; a++){
        printf("arr[%d]: %d\n",a,arr[a]);
    }

    ap += 9;
    for(a = 0; a < 10; a++){
        *tp = *ap;
        ap--;
        tp++;
    }

    for(a = 0; a < 10; a++){
        printf("tar[%d]: %d\n",a,tar[a]);
    }

    return 0;
}