#include<bits/stdc++.h>
using namespace std;

int main(){
	string temp_first = "I ";
	string temp_last = "it";
	string mid_fix = "that I ";
	string main = "";

	int n;
	cin >> n;

	for(int i=0; i<n; i++){

		if(i == (n-1)){
			mid_fix="";
		}

		if(i%2==0){
			main += "hate " + mid_fix;
		}else{
			main += "love " + mid_fix;
		}
	}

	cout << temp_first + main + temp_last << endl;
}