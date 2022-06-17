#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main() {
    char charType;
    int intType;
    long int longintType;
    long long int longlongintType;
    float floatType;



    // sizeof evaluates
    printf("Size of a char: %zu byte(s)\n", sizeof(charType));
    printf("Size of an int: %zu bytes(s)\n", sizeof(intType));
    printf("Size of a long int: %zu bytes(s)\n", sizeof(longintType));
    printf("Size of a long long int: %zu bytes(s)\n", sizeof(longlongintType));
    printf("Size of a float: %zu bytes(s)\n", sizeof(floatType));

    return 0;
}

