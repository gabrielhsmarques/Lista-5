#include <stdio.h>


typedef struct{
    int dia;
    int mes;
    int ano;
}aniversario;

typedef struct 
{
    int metros;
    int centimetros;
}altura;

typedef struct 
{
    int Kilo;
    int gramas;

}peso;

typedef struct
{
    char nome[200];
    aniversario niver;
    altura alt;
    peso gordo;
}pessoa;

int cm(int x) {
    if(x < 10) 
        return x*10;
    if(x > 99) 
        return cm(x/10);
    return x;

}

const char strmes[13][4] = {
        "", "JAN", "FEV", "MAR", "ABR", "MAI", "JUN", "JUL", "AGO", "SET", "OUT", "NOV", "DEZ"
    };


int main(){

    int n;
    int i;
    
    scanf("%d", &n);
    
    pessoa pes[n];


    for(i = 0; i < n ; i++){
        fflush(stdin);   
        scanf("%s %d/%d/%d %d.%d %d.%d", &pes[i].nome, &pes[i].niver.dia, &pes[i].niver.mes, &pes[i].niver.ano, &pes[i].alt.metros, &pes[i].alt.centimetros, &pes[i].gordo.Kilo, &pes[i].gordo.gramas);
    }

    for(i = 0; i < n ; i++){
        fflush(stdout);
        printf("%s %02d/%s/%d %dm%d %d.%dkg\n",pes[i].nome, pes[i].niver.dia, strmes[pes[i].niver.mes], pes[i].niver.ano, pes[i].alt.metros, cm(pes[i].alt.centimetros), pes[i].gordo.Kilo, pes[i].gordo.gramas);
    }


    return 0;
}