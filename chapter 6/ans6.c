#include <stdio.h>

char toUpper(char ch);

int main()
{
    char ch;

    printf("Enter a lowercase character: ");
    scanf(" %c", &ch);

    printf("Uppercase = %c", toUpper(ch));

    return 0;
}

char toUpper(char ch)
{
    if(ch >= 'a' && ch <= 'z')
        return ch - 32;
    else
        return ch;
}

