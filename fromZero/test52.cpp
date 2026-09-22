#include<bits/stdc++.h>
using namespace std;


int main(){
	string a, b, big;
	cin >> a >> b >> big;

	if(a.size() + b.size() != big.size()){
		cout << "NO" << endl;
		return 0;
	}

	map<char, int> freq;

	for(char c : big){
		freq[c]++;
	}

	for(int i=0; i<a.size(); i++){
		if(freq.count(a[i]) == 0 || freq[a[i]] == 0){
			cout << "NO" << endl;
			return 0;
		}else{
			freq[a[i]]--;
		}
	}

	for(int i=0; i<b.size(); i++){
		if(freq.count(b[i]) == 0 || freq[b[i]] == 0){
			cout << "NO" << endl;
			return 0;
		}else{
			freq[b[i]]--;
		}
	}

	cout << "YES" << endl;
}