//ALDO FUSTER TURPIN
#include <stdio.h>
#include <string.h>
#include <math.h>

/*
given a number in hexa, it returns the decimal conversion
The key is too use the ASCII table to convert the hexa digits.
*/
long long convert_to_decimal(char hex[]) {
    long long result = 0;
    int tmp;
    int i;
    int counter = strlen(hex) - 1;

    for(i = 0; hex[i] != '\0'; i++) {
        if(hex[i] >= '0' && hex[i] <= '9') tmp = hex[i] - 48;
        else if(hex[i] >= 'a' && hex[i] <= 'f') tmp = hex[i] - 87;
        else if(hex[i]>= 'A' && hex[i] <= 'F') tmp = hex[i] - 55;
        else {
            printf("this is not a valid digit in hexa: %c\n", hex[i]);
            return -1;
        }
        result += tmp * pow(16, counter);
        counter--;
    }
    return result;
}


void test() {
    char hexNumber[50];
    printf("Enter x(in hexa): ");

    /*
    "warning: format specifies type 'char *' but the argument has type 'char (*)[50]' [-Wformat]"
    this is why I use hexNumber instead of &hexNumber in scanf
    */
    scanf("%s", hexNumber);

    long long result =  convert_to_decimal(hexNumber); 
    if (result != -1) {
        printf( "\nHexa: %s -> Decimal:  %lld", hexNumber, result);
    }
    printf("\n");
}


int main() {
    while (1) {
        test();
    }
}
