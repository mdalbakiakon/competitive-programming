#include<bits/stdc++.h>
using namespace std;

const int N = 5;

void print_vec(const vector<vector<int>> &vec){
	for(int i=0; i<N; i++){
		for(int j=0; j<=i; j++){
			cout << vec[i][j];
		}
		cout << "\n";
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<vector<int>> vec(N, vector<int>(N, 1));

	print_vec(vec);

	cout << "\n";

	for(int i=2; i<N; i++){
		for(int j=1; j<i; j++){
			vec[i][j] = vec[i-1][j-1] + vec[i-1][j];
		}
	}

	print_vec(vec);
}