#include <iostream>
#include <string>

using namespace std;

void compute(void){

  string s;

  int ten = 0;
  int out = 0;
  int hit = 0;

  while( out != 3 ){

    cin >> s;

    if( s == "HIT"){
      hit++;
      if(hit > 3 ){
	ten++;
	hit = 3;
      }
    }
    else if( s == "HOMERUN" ){
      ten = ten + hit + 1;
      hit = 0;
    }
    else{
      out++;
    }
  }
  cout << ten << endl; 
}

int main(void){
  
  int n;  
  cin >> n;
  
  while( n-- ){
    compute();
  }

  return 0;
}


