#include<bits/stdc++.h>
using namespace std;

int main(){
	int levels;
	cin >> levels;

	int p;
	cin >> p;
	vector<int> x(p);
	for(int i=0; i<p; i++) cin >> x[i];
		
	int q;
	cin >> q;
	vector<int> y(q);
	for(int i=0; i<q; i++) cin >> y[i];

	unordered_set<int> checkX(x.begin(), x.end());
	unordered_set<int> checkY(y.begin(), y.end());

	int level = 1;
	while(level <= levels){
		if(checkX.count(level) == 0 && checkY.count(level) == 0){
			cout << "Oh, my keyboard!\n";
			return 0;
		}
		level++;
	}	

	cout << "I become the guy.\n";
}