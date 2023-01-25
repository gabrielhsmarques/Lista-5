#include <stdio.h>

struct 
{
    int dia;
    int mes;
    int ano;
}data;


int main(){

    printf("Digite a data sem zeros a esquerda: ");
    scanf("%d/%d/%d", &data.dia, &data.mes, &data.ano);


    printf("%02d.%02d.%d ", data.dia, data.mes, data.ano);
    printf("%02d-%02d-%d ", data.dia, data.mes, data.ano);
    printf("%02d/%02d/%d ", data.dia, data.mes, data.ano);

    const char strmes[13][4] = {
        "", "JAN", "FEV", "MAR", "ABR", "MAI", "JUN", "JUL", "AGO", "SET", "OUT", "NOV", "DEZ"
    };

    printf("%02d%s%d ", data.dia, strmes[data.mes], data.ano);


    return 0;
}