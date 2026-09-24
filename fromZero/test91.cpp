#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	set<int> setA;
	while(n--){
		int num;
		cin >> num;
		setA.insert(num);
	}

	cout << setA.size() << "\n";
}