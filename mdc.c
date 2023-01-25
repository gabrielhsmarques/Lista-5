#include <stdio.h>

int mdc(int a, int b){

    if (b == 0)
        return a;
    else
        return mdc(b, a % b);
}

int main(){

    int a, b, resposta;


    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    resposta = mdc(a, b);

    printf("%d", resposta);

    return 0;
}