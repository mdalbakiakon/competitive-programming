#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	set<int> unique;

	while(n--){
		int num;
		cin >> num;
		unique.insert(num);
	}

	if(unique.size() < 2){
		cout << "NO" << "\n";
	} else {
		auto it = unique.begin();
		++it;
		cout << *it << "\n";
	}

}