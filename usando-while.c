#include <stdio.h>
	int main(){
    int n,qtd,b,b2,b3;
    
    n = 3;
    b = 0;
    b2 = 1;
    b3 = 0;
    
    printf ("Insira o número de termos que gostaria de ver: ");
    scanf("%d", &qtd);
    printf ("1 \n");
    printf ("1 \n");
    
    
	while (n <= qtd) {
        b = b + b2+ b3;
        b2 = b - b2 - b3;
        b3 = b - b2 - b3;
       
        
        printf("%d\n", b);
        n++;
    }
    return 0;
}
