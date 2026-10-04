#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int level = 0;  // levels built so far
	int last = 0;   // cubes in the last built level
	int total = 0;  // cubes used so far

	while(true){
		int cost = last + level + 1;  // cubes needed for the next level
		if(total + cost > n) break;
		total += cost;
		last = cost;
		level++;
	}

	cout << level << "\n";
}