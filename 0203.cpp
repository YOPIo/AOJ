#include <iostream>
using namespace std;
 
int fld[17][17];
int cnt[17][17];
 
int main(){

    int X,Y,S;
    while(cin >> X >> Y, X || Y ) {

      for(int y = 0 ; y< 17 ; y++)
        for(int x = 0 ; x< 17 ; x++){
            fld[y][x] = 3;
            cnt[y][x] = 0;
        }
 
        for(int y = 0 ; y < Y ; y++)
	  for(int x= 1 ; x <= X ; x++){
            cin >> fld[y][x];
            cnt[y][x] = ( (y == 0 && fld[y][x] == 0 )? 1 : 0 );
	  }
 
        for(int y = 0 ; y < Y - 1 ; y++ )
	  for(int x = 1 ; x <= X  ; x++ ){
            if(fld[y][x] == 0){
	      if(fld[y + 1][x + 1] == 0) cnt[y + 1][x + 1] += cnt[y][x];
	      if(fld[y + 1][x - 1] == 0) cnt[y + 1][x - 1] += cnt[y][x];
	      if(fld[y + 1][x] != 1) cnt[y + 1][x] += cnt[y][x]; 
            }
            if( fld[y][x] == 2 && fld[y + 2][x] != 1 ){
	      cnt[y + 2][x] += cnt[y][x];
            }
	  }
 
        S = 0;
        for(int y=Y-1; y< Y+2; y++)
	  for(int x=1  ; x<=X  ; x++)
            S+=cnt[y][x];
 
 
        cout << S << endl;
    }
 
    return 0;
}


