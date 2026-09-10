#include<bits/stdc++.h>
using namespace std;

int main(){
	int init = 0;
	
	int n;
	cin >> n;
	
	for(int i=0; i<n; i++){
		string comm;
		cin >> comm;
		if(comm == "X++"){
			init++;
		}
		if(comm == "++X"){
			++init;
		}
		if(comm == "X--"){
			init--;
		}
		if(comm == "--X"){
			--init;
		}
	}

	cout << init << endl;
}

