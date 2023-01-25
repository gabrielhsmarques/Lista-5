 #include <stdio.h>

struct
{
    int metros;
    int centimetros;
} altura;

int cm(int x) {
    if(x < 10) 
        return x*10;
    if(x > 99) 
        return cm(x/10);
    return x;
}



int main(){

    
    printf("informe a sua altura: ");
    scanf("%d.%d", &altura.metros, &altura.centimetros);

    //altura.centimetros = cm(altura.centimetros);   

    printf("Altura %dm%d\n", altura.metros, cm(altura.centimetros));


    return 0;
}