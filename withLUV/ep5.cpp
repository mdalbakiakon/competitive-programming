#include<bits/stdc++.h>
using namespace std;

int main(){
	// string str = "hello";
	// cout << str << endl;

	// string str2;
	// cin >> str2;
	// cout << str2 << endl;

	// string str3;
	// getline(cin, str3);
	// cout << str3 << endl;


	// concatining
	string str1 = "Hello";
	string str2 = "Hello";
	string result = str1 + " " + str2;

	cout << result << endl; 

	if(str1 == str2){
		cout << "same string" << endl;
	}else{
		cout <<  "not same string" << endl;
	}

	cout << str1[0] << endl;
	cout << str1[str1.size()-1] << endl;


	// changing string in place
	str1[0] = 'X';
	cout << str1 << endl;
	cout << str1.size() << endl;



	// very important
	int t;
	cin >> t;
	cin.ignore(); //it will make the next getline from fresh new line

	while(t--){
		string s;
		getline(cin, s);
		cout << s << endl;
	}

	// reverse a string
	string str;
	getline(cin, str);
	cout << str << endl;

	string rev;
	string rev2;

	for(int i=str.size() - 1; i>=0; i--){

		rev.push_back(str[i]); //this is better for time complexity
		rev2 = rev2 + str[i]; //it will work but dont use this
	}

	cout << rev << endl;
	cout << rev2 << endl;

}