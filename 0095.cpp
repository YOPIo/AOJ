#include<iostream>
#include<algorithm>
 
using namespace std;
 
int main(){

    int n, p, fish;
    cin >> n;

    int rp = 20; 
    int max_fish = -100;

    for( int i = 0; i < n ; i++ ){
      
      cin >> p >> fish;
      
      if(max_fish < fish || max_fish == fish && rp > p){
	
        rp = p;
        max_fish = fish;
      }
    }
    cout << rp << " " << max_fish << endl;
    return 0;
}


