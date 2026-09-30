#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	set<int> vec;
	while(n--){
		int num;
		cin >> num;
		vec.insert(abs(num));
	}
	cout << *vec.begin() << "\n";
}