#include<bits/stdc++.h>
using namespace std;

int x;

int main(){
	int a = 50;
	int b = 4;
	int c = 6;

	cout << (a != b) << endl; 
	
	// we must use () here
	// return 1 for true 0 for false

	cout << ((c > a) && (c > b)) << endl;
	cout << ((c > a) || (c > b)) << endl;


	int input;
	cin >> input;

	if(input > 5){
		cout << "Hurreyyy!" << endl;
	}else{
		cout << "Booo!" << endl;
	}

	if(input%2==0){
		cout << "Divisable by 2" << endl;
	}
	else if(input%3==0){
		cout << "Divisable by 3" << endl;
	}
	else{
		cout << "Not divisable by 2 or 3" << endl;
	}


	{
		x = 10;
		// this x is inside x and declared as int x
		int x = 5;
		cout << x << endl; // for inside x just use x
		cout << ::x << endl; // for global we use ::x
	}

	cout << x << endl;
}