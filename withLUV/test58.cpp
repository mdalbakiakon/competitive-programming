#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		vector<int> vec(3);
		int n;
		cin >> n;
		for(int i=0; i<3; i++) cin >> vec[i];
		int minimum = *min_element(vec.begin(), vec.end());
		cout << n - minimum << endl;
	}
}