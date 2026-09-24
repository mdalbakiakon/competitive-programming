#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	set<int> setA;
	
	int num;
	while(cin >> num){
		setA.insert(num);
	}

	if(setA.size() == n) cout << "I become the guy.\n";
	else cout << "Oh, my keyboard!\n";

}