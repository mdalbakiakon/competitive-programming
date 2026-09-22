#include<bits/stdc++.h>
using namespace std;

int main(){
	
	long long int n;
	long long int result;

	cin >> n;

	result = pow(5, n);

	long long int final = result % 100;

	cout << final << endl;
}