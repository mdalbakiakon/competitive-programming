#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, f;
	cin >> n >> f;

	int width = 0;

	while(n--){
		int ph;
		cin >> ph;

		if(ph > f){
			width += 2;
		}else{
			width += 1;
		}
	}

	cout << width << endl;
}