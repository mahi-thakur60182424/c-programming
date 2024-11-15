#include<stdio.h>

int main(){
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch); // Note the space before %c to consume any whitespace

    if (ch >= 'A' && ch <= 'Z'){
        printf("The character '%c' is uppercase.\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("The character '%c' is lowercase.\n", ch);
    }else {
        printf("The character '%c' is neither uppercase nor lowercase.\n", ch);
    }

    return 0;
}
 
 