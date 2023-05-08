#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

int main(){
    int op, n1, n2;
    while(op!=5){
    printf("Escriba el primer numero\n");
    scanf("%d", &n1);
    printf("Escriba el segundo numero\n");
    scanf("%d", &n2);
    menu(n1, n2);
    }
return 0;
}