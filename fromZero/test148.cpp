#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b, c;
	cin >> a >> b >> c;

	vector<int> multiples;
	
	int count = 0;
	int start = 1;

	while(count < c){
		if(start % a == 0 || start % b == 0){
			multiples.push_back(start);
			count++;
		}
		start++;
	}

	int x = multiples[multiples.size()-1];
	int dec = -1;

	if(x%a==0 && x%b==0){
		dec = lcm(a, b);
	}else if(x%a==0){
		dec = a;
	}else dec = b;

	for(int i=x; i>=0; i=i-dec){
		cout << i << " ";
	}
	cout << "\n";
}