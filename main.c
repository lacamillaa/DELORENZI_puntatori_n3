#include <stdio.h>
#include <stdlib.h>

int* create_array(int n, int initial_value) {
    int* arr = (int*)malloc(sizeof(int) * n);
    if (arr == NULL) return NULL;
    for (int i = 0; i < n; i++) {
        *(arr + i) = initial_value;
    }
    return arr;
}

int main(void) {
    int len = 5;
    int *arr = create_array(len,1);
    if (arr == NULL) {
        printf("Memoria esaurita\n");
        return 1;
    };
    for (int i = 0; i < len; i++) {
        printf("%d ",*(arr + i));
    }
    printf("\n");
    free(arr);
    arr = NULL;
    return 0;
}