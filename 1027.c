#include  <stdio.h>
int main(void){

  int K,U;
  int sum,total;
  int i;
  int array[5000];

  while(1){

    sum = 0;

    scanf("%d",&K);
    if( K == 0 )break;

    U = K * ( K - 1 ) / 2;

    for( i = 0 ; i < U ; i++ ){
      scanf("%d",&array[i]);
    }

    for( i = 0 ; i < U ; i++ ){
      sum += array[i];
    }
    total = sum / ( K - 1 );
    printf("%d\n", total);
  }
  return 0;
}


