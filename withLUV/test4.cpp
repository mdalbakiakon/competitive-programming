#include<bits/stdc++.h>
using namespace std;

int main(){
	int a, b;
	cin >> a >> b;

	int yearCount = 0;

	while(a<=b){
		a = 3*a;
		b = 2*b;
		yearCount += 1;
	}

	cout << yearCount << endl;
}