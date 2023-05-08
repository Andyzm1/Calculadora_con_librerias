void sumar (int s1, int s2)
{
    int suma;
    suma= s1+s2;
    printf("La suma de los dos numeros es %d\n", suma);
}
void restar (int r1, int r2)
{
    int resta;

        resta= r1-r2;
    printf("La resta de los dos numeros es %d\n", resta);
}
void multiplicar (int m1, int m2)
{
    int multi;
    multi= m1*m2;
    printf("El producto de los dos numeros es %d\n", multi);
}
void division (float d1, float d2)
{
    float divi;
    if (d2==0){
        printf("No es posible dividir para 0\n");
    }
    else{
        divi= d1/d2;
    printf("La division de los dos numeros es %.2f\n", divi);
    }
}
