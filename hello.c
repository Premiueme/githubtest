#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("What is your name: ");
    printf("%s\n", s);
}