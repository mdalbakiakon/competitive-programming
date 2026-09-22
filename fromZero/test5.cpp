#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;

	int output = n;

	while(k--){
		if(output%10 == 0){
			output = output/10;
		}else{
			output = output - 1;
		}
	}

	cout << output << endl;
}