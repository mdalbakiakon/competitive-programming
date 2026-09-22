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
	// long acts differently on different OS
	// so avoid it use long long and use int when needed

	long long c = 1000000000;
	cout << c*c << endl;

	cout << endl;
	cout << endl;
	cout << endl;

	int mx = INT_MAX;
	cout << mx << endl;
	cout << mx + 1 << endl; //overflowing

	cout << endl;

	int d = 100000;
	int e = 100000;

	// using 1LL will be calculate the whole operation in Long Long
	long long int f = d * 1LL * e;
	cout << f << endl;


	double g = 1e24;

	// it will print in scientific mode
	cout << g << endl;

	// fixed will remove scientific mode
	cout << fixed << g << endl;

	// setprecision(0) means how many digit we want after decimal
	cout << fixed << setprecision(0) << g << endl;

	// using double may contain very wide or big number but it has a cost
	// the cost is for not accurate the digit u want to store
	// so avoid double unless asked so
	// use long long for int based large value as they are accurately stores

	// still double not int or anything
	cout << fixed << setprecision(0) << g << " " << typeid(g).name() << endl;

}
