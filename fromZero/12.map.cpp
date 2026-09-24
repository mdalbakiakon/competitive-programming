#include<bits/stdc++.h>
using namespace std;

int main(){

	map<string, int> giftMap = {
		{"Mishkath", 500}, 
		{"Rawaha", 250}, 
		{"Hazel", 250}, 
		{"Siam", 0}
	};

	for(auto [key, val] : giftMap){
		cout << key << " : " << val << endl;
	}

	for(auto &[key, val] : giftMap){
		if(key == "Rawaha"){
			val = 9999;
		}
	}

	cout << endl;

	for(auto [key, val] : giftMap){
		cout << key << " : " << val << endl;
	}

	// to delete any entry
	giftMap.erase("Siam");

	cout << endl;

	for(auto [key, val] : giftMap){
		cout << key << " : " << val << endl;
	}

	giftMap.insert(make_pair("Nimra", 500));

	cout << endl;
	
	for(auto [key, val] : giftMap){
		cout << key << " : " << val << endl;
	}

	cout << endl;

	// find
	auto it = giftMap.find("Mishkath");
	if(it == giftMap.end()){
		cout << "Wasey not found in the giftMap" << endl;
	}else{
		cout << it->first << " : " << it->second << endl;
	}
}