#include<bits/stdc++.h>
using namespace std;

int main(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	unordered_set<int> mySet = {a,b,c,d};
	cout << 4 - mySet.size() << endl;
}