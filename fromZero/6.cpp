#include<bits/stdc++.h>
using namespace std;

int main(){
	
	cout << 2+3*4/2 << endl; 
	cout << 1/3 << endl;
	cout << 2.75*2 <<endl;
	cout << 5.5/2.0 << endl;

	// datatype precedence
	// double -- float -- long long -- long -- int -- char

	cout << endl;
	cout << 'c' + 1 << endl; // data count always in higher precedence format here int > c so char c will be in the ascii value


	cout << 2*5/5 << endl;
	cout << 7/2.0*3 << endl;
	cout << 7/2*3 << endl;
	cout << 3*7/2 << endl;
}