#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int start=0;
	int end = 10;

	while(end--){
		cout << start << endl;
		start++;
	}

	cout << endl;

	for(int i=1; i<=10; cout << ++i << endl){

	}

	for(int i=1; i<=10; ++i){
		cout << i << endl;
	}

	cout << endl;
	cout << endl;
	cout << endl;

	// we will be printing pattern now

	int n;
	cin >> n;

	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout << "*";
		}
		cout << endl;
	}


	
	cout << endl;

	for(int i=1; i<=n; i++){
		
		if(i == 2){
			continue;
		}
		cout << i << endl;
	}

	int i = 1;
	while(i<=10){
		if(i==7){
			break;
		}
		cout << i << endl;
		i++;
	}
}