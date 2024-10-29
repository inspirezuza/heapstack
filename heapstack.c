#include <stdio.h>
#include <stdlib.h>

void stack_growth(int depth) {
    int local_var;
    printf("Stack depth %d: Address = %p\n", depth, (void*)&local_var);
    if (depth > 0) {
        stack_growth(depth - 1);
    }
}

void heap_growth(int depth) {
    for (int i = 0; i < depth; i++) {
        int *heap_var = (int *)malloc(sizeof(int) * 1000);
        printf("Heap allocation %d: Address = %p\n", i, (void*)heap_var);
    }
}

int main() {
    stack_growth(5);
    printf("\n");
    heap_growth(5);
    return 0;
}
