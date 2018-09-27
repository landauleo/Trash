#include <stdio.h>

void ft_ft(int******** a);

int main() {
    int s = 0;

    printf("s = %d\n", s);

    int *pointer1 = &s;
    int **pointer2 = &pointer1;
    int ***pointer3 = &pointer2;
    int ****pointer4 = &pointer3;
    int *****pointer5 = &pointer4;
    int ******pointer6 = &pointer5;
    int *******pointer7 = &pointer6;
    int ********pointer8 = &pointer7;

    printf("%p %p", pointer1, *pointer1);
    printf("\n%p %p", pointer2, *pointer2);
    printf("\n%p %p", pointer3, *pointer3);
    printf("\n%p %p", pointer4, *pointer4);
    printf("\n%p %p", pointer5, *pointer5);
    printf("\n%p %p", pointer6, *pointer6);
    printf("\n%p %p", pointer7, *pointer7);
    printf("\n%p %p", pointer8, *pointer8);

    ft_ft(pointer8);

    printf("\ns = %d", s);

    return 0;
}

void ft_ft(int ********a) {
    ********a = 45;
}
