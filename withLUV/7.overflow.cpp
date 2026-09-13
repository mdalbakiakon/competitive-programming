#include<bits/stdc++.h>
using namespace std;

int main(){
	// overflow
	int a = 100000;
	int b = 100000;

	cout << a*b << endl;
	cout << (long)a*b << endl;	
	cout << (long long)a*b << endl;

	cout << endl;
	cout << endl;
	cout << endl;

	// for integer remember 10 > 10 > 19 digits
	// int > long > long long

	long long c = 1000000000;
	cout << c*c << endl;
}
