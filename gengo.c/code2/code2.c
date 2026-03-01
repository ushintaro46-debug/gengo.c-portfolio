#include<stdio.h>

int main() {
    int num = 0;
    while (num < 10) {
        if (num == 0) {
            printf("This is 0\n");
        } else if (num < 5) {
            printf("This is UNDER 5\n");
        } else {
            printf("This is OVER 5\n");
        }
        num = num + 1;
    }
}