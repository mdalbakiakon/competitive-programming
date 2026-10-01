#include<bits/stdc++.h>
using namespace std;

int perfectSqrt = -1;

int convert(string str){
	reverse(str.begin(), str.end());
	int dec=1;
	int num=0;
	for(int i=0; i<str.size(); i++){
		num += dec*(str[i]-'0');
		dec*=10;
	}
	return num;
}

bool isPerfectSquare(int n){
	if(n < 0) return false;
	long long r = 1LL * sqrt((double)n);
	if(r*r == n) perfectSqrt=r;
	return r*r == n;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while(t--){
		string str;
		cin >> str;
		int year = convert(str);
		if(!isPerfectSquare(year)){
			cout << -1 << endl;
			continue;
		}
		if(perfectSqrt%2==0){
			cout << perfectSqrt/2 << " " << perfectSqrt/2 << "\n";
		}else{
			cout << perfectSqrt/2 << " " << perfectSqrt/2 + 1 << "\n";
		}
	}

}