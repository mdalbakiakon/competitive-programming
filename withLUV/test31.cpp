#include<bits/stdc++.h>
using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b >> c;

	int distance = 999;
	{
		distance = min(distance, (abs(a-b) + abs(a-c)));
	}
	{
		distance = min(distance, (abs(b-a) + abs(b-c)));
	}
	{
		distance = min(distance, (abs(c-a) + abs(c-b)));
	}

	cout << distance << endl;
}