#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, t;
	cin >> n >> t;

	string text;
	cin >> text;

	while(t--){
		for(int i=1; i<text.size(); i++){
			if(text[i] == 'G' && text[i-1] == 'B'){
				swap(text[i], text[i-1]);
				i=i+1;
			}
		}
	}

	cout << text << endl;
}