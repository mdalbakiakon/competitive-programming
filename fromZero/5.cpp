#include<bits/stdc++.h>
using namespace std;

int main(){
	cout << 3/2 << endl;		//int/int --> int
	cout << 3/2.0 << endl;		//int/fload or double --> float/double

	// datatype precedence
	// double
	// float
	// long long int
	// long int
	// int
	// char
	// rest


	double d = 5/4; //calculation happened in int as int/int so d will store a int
	cout << d << endl; 
	cout << typeid(d).name() << endl; //double stored but inside it is an int

	d = 5/4.0;
	cout << d << endl;
}