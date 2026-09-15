#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	string str;

	cin >> n;
	cin >> str;

	int countA = 0;
	int countD = 0;

	for(int i=0; i<n; i++){
		if(str[i] == 'A'){
			countA += 1;
		}
		if(str[i] == 'D'){
			countD += 1;
		}
	}

	if(countA > countD){
		cout << "Anton" << endl;
	}else if(countD > countA){
		cout << "Danik" << endl;
	}else{
		cout << "Friendship" << endl;
	}
	return 0;
}