#include <iostream>
#include <cstdio>

using namespace std;

int main(void){

  int n;
  while( cin >> n , n ){

    int h,b,a;
    int lunch = 0,cnt_l = 0;
    int dinner = 0,cnt_d = 0;
    int midnight = 0,cnt_m = 0;
    int in8;

    for(int i = 0 ; i < n ; i++ ){
      scanf("%d:%d %d",&h,&b,&a);
      int ok = 0;
      if( a >= b && a - b <= 8 ) ok++;
	else if( a < b && 60 - b + a <= 8 ) ok++;

      if( 11 <= h && h < 15 ){
	lunch++;
	cnt_l += ok;
      }    
      else if( 18 <= h && h < 21 ){
	dinner++;
	cnt_d += ok;
      }
      else if( (21 <= h && h <= 24 ) || ( 0 <= h && h < 2 ) ){
	midnight++;
	cnt_m += ok;
      }
    }

   if(lunch){
            printf("lunch %d\n", cnt_l * 100 / lunch);
        }else{
            printf("lunch no guest\n");
        }
        if(dinner){
            printf("dinner %d\n", cnt_d * 100 / dinner);
        }else{
            printf("dinner no guest\n");
        }
        if(midnight){
            printf("midnight %d\n", cnt_m * 100 / midnight);
        }else{
            printf("midnight no guest\n");
        }
    
  }
  return 0;
}


