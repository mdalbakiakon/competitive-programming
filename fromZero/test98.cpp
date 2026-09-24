#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;

	unordered_set<int> setA;
	while(n--){
		int num;
		cin >> num;
		setA.insert(num);
	}

	int count = 0;
	for(int i : setA){
		int need = i + k;
		if (setA.count(need) == 1) count++;
	}

	cout << count << "\n";
}