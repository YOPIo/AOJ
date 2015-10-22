#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int n,N,k;
int mou[200];

int main(void){

  cin >> n;
  queue<int> q;
  queue<int> ri;

  for( int i = 1 ; i <= 2*n ; i++ ){
    q.push(i);
  }

  cin >> N;
  while(N--){
    
    cin >> k;
    if( !k ){
      for( int j = 0 ; j < n ; j++ ){
	int t = q.front();
	ri.push(t);
	q.pop();
      }
      for( int j = 0 ; j < 2*n ; j++ ){
	int t = ri.front();
	mou[j] = t;
	ri.pop();
	j++;
	t = q.front();
	mou[j] = t;
	q.pop();
      }
      for( int j = 0 ; j < 2*n ; j++ ){
	int t = mou[j];
	q.push(t);
      }
    }
    
    else{
      for( int j = 0 ; j < k ; j++ ){
	int t = q.front();
	q.push(t);
	q.pop();
      }
    }
   }
  for( int i = 0 ; i < 2*n ; i++ ){
    cout << q.front() << endl;
    q.pop();
  }
  return 0;
}


