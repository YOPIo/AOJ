#include <iostream>

using namespace std;

int main(void){

	string targetWord, word;
	int num = 0;
	int ans = 0;

	cin >> targetWord;
	cin >> num;

	for(int i  = 0 ; i < num ; ++i){
		cin >> word;
		word = word + word;
		for(int j = 0 ; j < word.size(); ++j){
			if( word.find(targetWord) != -1 ){
				++ans;
				break;
			}
		}
	}
	cout << ans << endl;

	return 0;
}

