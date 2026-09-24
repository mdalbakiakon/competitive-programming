#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b;
	while(cin >> a >> b){

	if(a==0 && b == 0) break;

	unordered_set<int> setA;

	while(a--){
		int num;
		cin >> num;
		setA.insert(num);
	}

	unordered_set<int> setB;
	
	while(b--){
		int num;
		cin >> num;
		setB.insert(num);
	}

	int count = 0;

	for(int n: setB){
		if(setA.count(n) == 1){
			count++;
		}
	}

	cout << count << "\n";
}
}