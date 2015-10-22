#include <iostream>

using namespace std;

int bh,bm,bs,ah,am,as;
int b_second,a_second,res_second;
int h,m,s;

int main(void){

  while( cin >> bh >> bm >> bs >> ah >> am >> as ){

    b_second = a_second = h = m = s = 0;
    b_second = bh*3600 + bm*60 + bs;
    a_second = ah*3600 + am*60 + as;
    res_second = a_second - b_second;

    while( res_second >= 3600 ){
      h++;
      res_second -= 3600;
    }
    while( res_second >= 60 ){
      m++;
      res_second -= 60;
    }
    cout << h << " " << m << " " << res_second << endl;

    for( int i = 0 ; i < 2 ; i++ ){

      cin >> bh >> bm >> bs >> ah >> am >> as;
      
      b_second = a_second = res_second = h = m = s = 0;
      b_second = bh*3600 + bm*60 + bs;
      a_second = ah*3600 + am*60 + as;
      res_second = a_second - b_second;
      
      while( res_second >= 3600 ){
	h++;
	res_second -= 3600;
      }
      while( res_second >= 60 ){
	m++;
	res_second -= 60;
      }
      cout << h << " " << m << " " << res_second << endl;
      
      
    }
    
    
  }
  
  
  return 0;
}


