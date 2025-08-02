#include <stdio.h>

// The first function to calculate the value of N natural number.

long long sum_of_natural_numbers(int n) {
    return (long long)n * (n + 1)/2;
}

long long sum_of_square_natural_numbers(int n){
    return (long long)n * (n + 1) * (2 * n + 1)/6;
}

int main(){
    int N;

    //prompt user to Enter input.
    printf("Enter Postive Natural numbers N: ");
    scanf("%d", &N);

    //calculate the both values.
    long long sum = sum_of_natural_numbers(N);
    long long sum_of_square = sum * sum;
    long long  sum_square = sum_of_square_natural_numbers(N);

    //compute differences.
    long long difference = sum_of_square - sum_square;

    // Output the result
    printf("The difference between the square of the sum and the sum of the squares of the first %d natural numbers is: %lld\n", N, difference);

    return 0;
}