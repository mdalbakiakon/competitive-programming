#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n){
	return n > 0 && (n & (n-1)) == 0;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector<int> vec(n);
	for(int &v : vec) cin >> v;

	int start = 0;
	int end = n-1;

	int count = 0;

	while(start != end){
		int sum = vec[start] + vec[end];
		if(isPowerOfTwo(sum)) count++;
		
		if(end == start + 1){
			start++;
			end = n - 1;
		}else{
			end--;
		}
	}

	cout << count << "\n";
}