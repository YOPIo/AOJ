#include <iostream>
#include <algorithm>
#define MAX 10000

using namespace std;

int main(void){

  int d, n, m;
  while(cin >> d, d){
    
    cin >> n >> m;
    int shop[n + 1],  des[m];
    shop[0] = 0;
    shop[n] = d;
    
    for(int i = 1 ; i < n ; i++)
      cin >> shop[i];
    for(int i = 0 ; i < m ; i++)
      cin >> des[i];

    sort(shop, shop + n + 1);
    sort(des, des + m);

    int s = 0, sum = 0;
    for(int i = 0 ; i < n + 2 ; i++){
      if(shop[i] <= des[s] && des[s] <= shop[i + 1]){
	sum += min(shop[i + 1] - des[s], des[s] - shop[i]);
	s++;
	i--;
      }
      if(s >= m) break;
    }
    cout << sum << endl;
  }
  return 0;
}


