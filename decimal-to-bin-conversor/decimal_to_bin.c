//ALDO FUSTER TURPIN
#include <stdio.h>
#include <string.h>
#include <math.h>


//given a decimal number, prints out the binary representation of that number
void convert_to_bin(unsigned long long number) {
    if (number == 0) printf("0");
    else {
        int i = 0;
        int nBits = floor(log2(number) + 1);
        int bin[nBits];
        
        while (number > 0) {
            bin[i] = number % 2;
            number = number / 2;
            i++;
        }
        //i now "points" one position further the last element of 
        //bin(due to the "i++"" the last time we entered the while)

        //we must print in reversed order
        //due to the way we are converting from decimal to binary
        for (int j = i - 1; j >= 0; --j) printf("%d", bin[j]);
    }
}


void test() {
    unsigned long long x;
    printf("Enter decimal number and press ENTER: ");
    
    scanf("%llu", &x);

    printf( "\nDecimal: %llu -> Bin: ", x);
    convert_to_bin(x);

    printf("\n");
}

int main() {
    while (1) {
        test();
    }
}
