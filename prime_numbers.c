#include <stdio.h>

int main() {
    int Prime_numbers_to_show, n, d;
    int prime_number;

    printf("How many prime numbers you want to show?: ");
    scanf("%d", &prime_numbers_to_show);

    n = 2;
    while (prime_numbers_to_show > 0) {

        //It is prime?
        prime_number = 1;
        for (d = 2; d < n; ++d) {
            if (n % d == 0) {
                prime_number = 0;
                break;
            }
        }

        //Show number and reset the counter
        if (prime_number) {
            printf("%d ", n);
            Prime_numbers_to_show--;
        }
        n++;
    }

    printf("\n");
    return 0;
}
