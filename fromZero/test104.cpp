#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str = "bangladesh";

	for(int i = 0, j = str.size() - 1; i < j; i++, j--){
		cout << str[i] << " " << str[j] << "\n";
	}
}