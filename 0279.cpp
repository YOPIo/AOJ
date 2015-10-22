#include <iostream>
#include <algorithm>

using namespace std;

int main(void){

  int kind,remain[10000];
  while(cin >> kind, kind){
    for(int i = 0 ; i < kind ; i++)
      cin >> remain[i];

    int ans = 0, cnt = 0;
    for(int i = 0 ; i < kind ; i++){
      if(remain[i] < 2) cnt++;
      if(remain[i] > 0){
	ans++;
	remain[i]--;
      }
    }
    if(cnt == kind) cout << "NA" << endl;
    else cout << ans + 1 << endl;
  }
  return 0;
}


