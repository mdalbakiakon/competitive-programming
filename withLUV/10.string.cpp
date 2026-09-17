#include<bits/stdc++.h>
using namespace std;

int main(){
	// declaration
	string str;
	cin >> str;

	cout << str << endl;

	// iteration
	for(char c : str){
		cout << c << " ";
	}

	cout << endl;

	for(char c : str){
		cout << (char)toupper(c) << " ";
	}

	cout << endl;


	cout << str << endl;

	// change the main str to uppercase 
	transform(str.begin(), str.end(), str.begin(), ::toupper);


	cout << str << endl;

	// using for loop to change in place
	for(char& c : str){
		c = tolower(c); // remember we need to assign back to c for in place
	}

	cout << str << endl;


	string a = "10";
	cout << a << " " << typeid(a).name() << endl;
	cout << stoi(a) << " " << typeid(stoi(a)).name() << endl;

	string num = "25.9075";
	cout << typeid(num).name() << endl;
	cout << typeid(stod(num)).name() << endl;
	cout << stod(num) << endl;



	// adding strings to a curr string
	string check_str = "a";
	cout << check_str << endl;

	check_str += "world";
	cout << check_str << endl;

	for(char c : check_str){
		cout << c << endl;
	}
}