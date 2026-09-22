#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;

	while(t--){
		int a, b, c;
		cin >> a >> b >> c;

		int maximum = max({a, b, c});
		int minimum = min({a, b, c});

		if(a != maximum && a != minimum){
			cout << a << endl;
		}
		else if(b != maximum && b != minimum){
			cout << b << endl;
		}
		else if(c != maximum && c != minimum){
			cout << c << endl;
		}
	}
}