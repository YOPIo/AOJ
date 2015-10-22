#include <iostream>

using namespace std;

int main(void){


  int p[8];
  int mgr[8] = {1,2,1,2,1,4,1,4};

  while( cin >> p[0] ){

    for( int i = 1 ; i < 8 ; i++ ){
      cin >> p[i];
    }
    int s = 0;
    int min = 9999999;
    int i = 0;
    int a[8] = {0,2,6,4,1,3,7,5};
    int b[8] = {1,3,7,5,2,4,0,6};
    int c[8] = {2,4,0,6,3,5,1,7};
    int d[8] = {3,5,1,7,4,6,2,0};
    int e[8] = {4,6,2,0,5,7,3,1};
    int f[8] = {5,7,3,1,6,0,4,2};
    int g[8] = {6,0,4,2,7,1,5,3};
    int h[8] = {7,1,5,3,0,2,6,4};
    int ans;
    
    while(1){
      s = 0;
      if( p[0] - mgr[a[i]] > 0 ) s = s + p[0] - mgr[a[i]];
      if( p[1] - mgr[b[i]] > 0 ) s = s + p[1] - mgr[b[i]];
      if( p[2] - mgr[c[i]] > 0 ) s = s + p[2] - mgr[c[i]];
      if( p[3] - mgr[d[i]] > 0 ) s = s + p[3] - mgr[d[i]];
      if( p[4] - mgr[e[i]] > 0 ) s = s + p[4] - mgr[e[i]];
      if( p[5] - mgr[f[i]] > 0 ) s = s + p[5] - mgr[f[i]];      
      if( p[6] - mgr[g[i]] > 0 ) s = s + p[6] - mgr[g[i]];
      if( p[7] - mgr[h[i]] > 0 )s = s + p[7] - mgr[h[i]];    
      //cout << "---" << s << "---" << endl;
      if( min > s ){
	min = s;
	ans = i;
      }
      if( i == 7 )break;
      i++;
    }
 
    cout << mgr[a[ans]] << " " << mgr[b[ans]] << " " << mgr[c[ans]] << " " << mgr[d[ans]] << " " << mgr[e[ans]] << " " << mgr[f[ans]] << " " << mgr[g[ans]] << " " << mgr[h[ans]] << endl;
    
    
  }
  
  return 0;
}


