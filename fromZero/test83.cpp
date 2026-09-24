#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	while(t--){
		char arr[10][10];

		for(int i=0; i<10; i++){
			for(int j=0; j<10; j++){
				cin >> arr[i][j];
			}
		}

		int start = 0;
		int end = 9;
		int total = 0;
		int main_total = 0;
		int ptn = 1;

		// loop for all boxes
		while(start < end){
			// each boxes
			for(int i=start; i<=end; i++){
				if(i==start || i==end){
					for(int j=start; j<=end; j++){
						if(arr[i][j] == 'X'){
							total++;
						}
					}
				}else{
					if(arr[i][start] == 'X'){
						total++;
					}
					if(arr[i][end] == 'X'){
						total++;
					}
				}

				main_total += total*ptn;
				total = 0;
			}
			ptn++;
			start++;
			end--;
		}

		cout << main_total << "\n";
	}
}