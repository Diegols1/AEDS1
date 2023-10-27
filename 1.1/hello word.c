#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("hello word, in vs code :)\n");
    system("pause");
    return 0;
}