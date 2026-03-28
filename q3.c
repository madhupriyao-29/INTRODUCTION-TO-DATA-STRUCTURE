#include <stdio.h>

#define MAX 100

int main() {
    int arr[] = {4, 5, 2, 10, 8};
    int n = 5;
    int stack[MAX], top = -1;
    int i;

    stack[++top] = arr[0];

    for(i = 1; i < n; i++) {
        while(top != -1 && stack[top] < arr[i]) {
            printf("%d -> %d\n", stack[top--], arr[i]);
        }
        stack[++top] = arr[i];
    }

    while(top != -1) {
        printf("%d -> -1\n", stack[top--]);
    }

    return 0;
}