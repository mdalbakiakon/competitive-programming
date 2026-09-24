#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int area_domino = 2;
	int m, n;
	cin >> m >> n;
	int box_area = m * n;
	cout << box_area / area_domino << "\n";
}