#include <stdio.h>


int fibbonacci(int n) {
    if(n == 0)
        return 0;
    else if(n == 1) 
        return 1;
    else 
        return (fibbonacci(n-1) + fibbonacci(n-2));
   
}




int main(){

    int a;
    
    printf("Digite o indice da sequencia: ");
    scanf("%d", &a);
    


    printf("%d", fibbonacci(a));

    return 0;
}