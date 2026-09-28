#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	vector<int> vec(n);
	for(int &v : vec) cin >> v;

	map<int, int> whoGave;

	for(int i=0; i<n; i++){
		whoGave[vec[i]-1] = i + 1;
	}

	for(auto &[index, value] : whoGave){
		cout << value << " ";
	}
}