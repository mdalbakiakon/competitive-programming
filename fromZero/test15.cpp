#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    vector<int> arr(t);

    for(int i=0; i<t; i++){
    	int x;
    	cin >> x;
    	arr[i] = x;
    }

    int untreated = 0;
    int policeAvailable = 0;

    for(int i=0; i<t; i++){
    	if(policeAvailable == 0 && arr[i] == -1){
    		untreated += 1;
    	}
    	else if(policeAvailable > 0 && arr[i] == -1){
    		policeAvailable -= 1;
    	}
    	else if(arr[i]>0){
    		policeAvailable +=  arr[i];
    	}
    }

    cout << untreated << endl;

    return 0;
}