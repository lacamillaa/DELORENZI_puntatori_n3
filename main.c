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
    printf("Hello, World!\n");
    return 0;
}