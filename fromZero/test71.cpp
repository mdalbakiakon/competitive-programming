#include<bits/stdc++.h>
using namespace std;

bool is_prime(int n){
	if(n<=1) return false;
	if(n==2 || n==3) return true;
	if(n%2==0) return false;
	for(int i=3; i*i<=n; i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b;
	cin >> a >> b;

	for(int i=a+1; i<=b; i++){
		if(is_prime(i)){
			cout << (i == b ? "YES\n" : "NO\n");
			return 0;
		}
	}

	cout << "NO\n";
}