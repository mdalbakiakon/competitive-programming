#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int k;
	cin >> n >> k;

	int time = (4*60) - k;
	int count = 0;

	for(int i=1; i<=n; i++){
		
		int need = 5 * i;
		
		if(need > time){
			break;
		}

		time = time - need;
		count++;
	}

	cout << count << endl;
}