#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Ol� Mundo! \n\n");

    system("pause");
    return 0;
}