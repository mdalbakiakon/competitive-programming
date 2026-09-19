#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		string ticket;
		cin >> ticket;

		int i = 1;
		
		int first_half = 0;
		int last_half = 0;

		for(char d : ticket){
			if(i<=3){
				first_half += (d - '0');
				i+=1;
			}else{
				last_half += (d - '0');
				i+=1;
			}
		}

		if(first_half == last_half){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}