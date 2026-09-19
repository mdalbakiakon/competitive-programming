#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	getline(cin, str);
	
	// string rev_str;
	// for(int i=str.size() - 1; i>=0; i--){
	// 	rev_str.push_back(str[i]);
	// }

	// cout << (str == rev_str) << endl;

	// more effecient way using 2 pointer so we may
	// eliminate the use of extra space 
	// also no iteration needed if it is not palindrom at all


	int start = 0;
	int last = str.size() - 1;
	// cout << start << " " << last << endl;

	while(start<last){
		if(str[start] == str[last]){
			start += 1;
			last -= 1;
		}
		else{
			cout << "NO" << endl;
			return 0;
		}
	}

	cout <<  "YES" << endl;


	string ss, ss2;
	getline(cin, ss);
	getline(cin, ss2);

	cout << ss << endl;
	cout << ss2 << endl;
}