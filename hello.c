#include <cs50.h>
#include <stdio.h>
#include <string.h> // functions related to strings
#include <ctype.h> // functions related to characters

int main(void)
{
    string s = get_string("What is your name: ");
    printf("%s\n", s);
}