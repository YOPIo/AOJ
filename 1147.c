#include <stdio.h>
int main(void){

  int n;
  int s[1000];
  int i;
  int score;
  int min;
  int max;
  while(1){

    score = 0;
    min = 1000;
    max = 0;

    scanf("%d",&n);
    if( n == 0 )break;
    
    for( i = 0 ; i < n ; i++ ){
      scanf("%d",&s[i]);
      if( min > s[i] ) min = s[i];
      if( max < s[i] ) max = s[i];
      score += s[i]; 
    }
    score = score - min - max;
    score = score / ( n - 2 );
    printf("%d\n", score); 
  }
  return 0;
}


