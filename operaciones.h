#include <stdio.h>
#include <stdlib.h>
#include "operaciones.c"
void menu(int n1, int n2);
void imprimir (int op, int n1, int n2){
    switch (op)
    {
    case 1:
        sumar(n1, n2);
        break;
    case 2:
        restar(n1, n2);
        break;
    case 3:
        multiplicar(n1, n2);
        break;
    case 4:
        division(n1, n2);
        break;
    case 5:
        printf("Lindo dia\n");
        exit(0);
    default:
        printf("Opcion invalida, intentelo nuevamente\n");
        menu(n1, n2);
        break;
    } 
}
void menu(int n1, int n2){
    int op;
    printf("Decida que es lo que desea realizar:\n 1.Sumar\n 2.Restar\n 3.Multiplicar\n 4.Dividir\n 5.Salir\n");
    scanf("%d", &op);
    imprimir (op, n1, n2);
}