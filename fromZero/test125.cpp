#include<bits/stdc++.h>
using namespace std;

int main(){
	// binary string
	string bnr = "1010";

	int dec = 0;
	int power2 = 1;

	// binary to decimal convertion
	for(int i=bnr.size()-1; i>=0; i--){
		int x = bnr[i] - '0';
		dec += x * power2;
		power2 *= 2;
	}

	cout << dec << endl;


	// now from dec to binary conversion
	int n = 10;
	cout << bitset<8>(n) << endl;

	// using bitset will make any decimal to binary number 
	// with as much as bitset we need or want

	cout << typeid(bitset<8>(n)).name() << endl;
	cout << typeid("bangladesh").name() << endl;
}