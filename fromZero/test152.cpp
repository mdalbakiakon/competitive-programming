#include<bits/stdc++.h>
using namespace std;

void convert(char &c){
	if(c >= 97){
		c -= 32;
	}else{
		c += 32;
	}
}

bool isPrime(int n){
    if(n < 2) return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	cin >> str;

	for(int i=0; i<str.size(); i++){
		convert(str[i]);
	}

	int up = 0;
	int low = 0;

	for(int i=0; i<str.size(); i++){
		if(str[i] >= 97){
			up+=str[i];
		}else low+=str[i];
	}

	int diff = abs(up-low);
	cout << isPrime(diff) << "\n";

}