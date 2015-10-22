#include<iostream>
#include<queue>
#include <stdio.h>

using namespace  std;

int n,m,now,t;

int main(void){

  while( cin >> n >> m , n || m ){

    queue<int>Q;
    for(int i = 0 ; i < n ; i++ ) Q.push(i + 1);
    
    now = 1;
    
    while( Q.size() > 1 ){
      
      t = Q.front();
      
      if( now % m != 0){
	Q.push(t);
      }
      
      now++;
      Q.pop();
      
    }
    
    printf("%d\n",Q.front() );
  }
  return 0;
}


