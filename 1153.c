#include <stdio.h>
int main(void){

  int n,m;
  int i,j,k;
  int taro[100];
  int hanako[100];
  int temp;
  int totaltaro2;
  int totalhanako2;
  int ec1 = 0;
  int ec2 = 0;
  int c;

  while(1){

    scanf("%d%d",&n,&m);
    if( n == 0 && m == 0 )break;

    for( i = 0 ; i < n ; i++ ){
      scanf("%d",&taro[i]);
    }
    for( i = 0 ; i < m ; i++ ){
      scanf("%d",&hanako[i]);
    }
    
    ec1 = 0;
    ec2 = 0;
    c = 0;

	for( i = 0 ; i < n ; i++ ){
	  for( j = 0 ; j < m ; j++ ){

	    totaltaro2 = 0;
	    totalhanako2 = 0;
	    

	    temp = taro[i];
	    taro[i] = hanako[j];
	    hanako[j] = temp;

	    for( k = 0 ; k < n ; k++ ){
	      totaltaro2 += taro[k];
	    }
	    for( k = 0 ; k < m ; k++ ){
	      totalhanako2 += hanako[k];
	    }

	    if( totaltaro2 == totalhanako2 && c == 0 ){
	      ec1 = hanako[j];
	      ec2 = taro[i];
	      c++;
	    }
	    if(totaltaro2 == totalhanako2 && ec1 > hanako[j] && ec2 > taro[i]){
	      ec1 = hanako[j];
	      ec2 = taro[i];
	    }

	    temp = taro[i];
	    taro[i] = hanako[j];
	    hanako[j] = temp;
	  }
	}
	if( ec1 == 0 && ec2 == 0 ) printf("-1\n");
	else  printf("%d %d\n", ec1, ec2);
  }
  return 0;
}


