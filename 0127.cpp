#include <iostream>
#include <string>

using namespace std;

int main(void){

  string s;

  char h[6][5] = {'a','b','c','d','e','f',
		  'g','h','i','j','k','l',
		  'm','n','o','p','q','r',
		  's','t','u','v','w','x',
		  'y','z','.','?','!',' ' };
 back:
  while( cin >> s ){
    
    int l = s.size();
    if( l % 2 == 1 ){
      cout << "NA" << endl;
      continue;
    }
    
    int x[200] = {0},y[200] = {0},I = 0;
    for( int i = 0 ; i < l ; i += 2 ){
      x[I] = s[i] - '0';
      y[I] = s[i + 1] - '0';
      if( x[I] > 6 || y[I] > 5 || x[I] <= 0 || y[I] <= 0 ){
	cout << "NA" << endl;;
	goto back;
      }
      else{
	x[I]--;
	y[I]--;
      }
      I++;
    }
    for( int i = 0 ; i < I ; i++ ){
      cout << h[x[i]][y[i]];
    }
    cout << endl;
  }
  return 0;
}


