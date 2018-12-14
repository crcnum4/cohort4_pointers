// #include<cs50.h>
#include<stdio.h>
#include<string.h>

int main(void)
{
    char* name = "Cliff";
    printf("%s\n", name);
    for (int i = strlen(name) - 1; i >= 0; i++)
    {
        printf("%c", name[i]);
    }
    printf("\n");
}