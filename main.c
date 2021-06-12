#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ForPower(int, int);
int WhilePower(int, int);
void EvenOdd(int);

int main() {
    printf("ForPower(2,5) = %\n", ForPower(2, 5));
    printf("WhilePower(2,5) = %\n", WhilePower(2, 5));

    EvenOdd(18231);
    EvenOdd(23098);
    EvenOdd(1555);
}
    int ForPower(int x, int y) {
        int result = 1;
        for (int i = 1; i <= y; i++){
            result *= x;
        }
        return result;
    }

    int WhilePower(int x, int y) {
        int result = 1;
        while (y > 0) {
            result *= x;
            y--;
        }
        return result;
    }

    void EvenOdd(int x) {
        int evenTest = x % 2;
        int fiveTest = x % 5;

        printf("Input value: %d\n", x);

        if (evenTest = 0)
            printf("This is even!\n");
        else
            printf("This is odd!\n");
        if (fiveTest == 0)
            printf("This number is a multiple of five\n");
    }
