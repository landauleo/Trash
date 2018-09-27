#include <stdio.h>

void ft_ft(int *a);

int main() {
    int s = 0;
    
    printf("s = %d", s); //std::cout << "s = " << s;

    ft_ft(&s);

    printf("\ns = %d", s); //std::cout << "\ns = " << s;

    return 0;
}

void ft_ft(int *a) {
    *a = 45;
}
