#include<bits/stdc++.h>
using namespace std;

int main(){

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i=0; i<n; i++) cin >> arr[i];

	int start = 0;
	int end = n-1;
	
	int s_score = 0;
	int d_score = 0;

	int turn = 's';

	while(start<=end){
		if(turn == 's'){
			int a = arr[start];
			int b = arr[end];
			if(a > b){
				start++;
				s_score += a;
			}else{
				end--;
				s_score += b;
			}

			turn = 'd';
		}else{
			int c = arr[start];
			int d = arr[end];
			if(c > d){
				start++;
				d_score += c;
			}else{
				end--;
				d_score += d;
			}

			turn = 's';
		}
	}

	cout << s_score << " " << d_score << "\n";
}