#include <stdio.h>

int main(void) {
   int num, max;
   
   do {
    printf("Digite um numero impar : ");
    scanf("%d", &num);
   } while(num % 2 == 0);
  
    for (int i = 1; i <= num; i++) {
        max = i;
        printf(" %d ", i);
    }
  
    while (max >= num) {
        printf(" %d ", num--);    
    }
   printf("\n");

  return 0;
}