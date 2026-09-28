#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	vector<int> stud(n);
	for(int &st : stud) cin >> st;

	set<int> math, pro, spo;

	for(int i=0; i<n; i++){
		if(stud[i] == 1) math.insert(i+1);
		else if(stud[i] == 2) pro.insert(i+1);
		else if(stud[i] == 3) spo.insert(i+1);
	}

	int w = min({math.size(), pro.size(), spo.size()});
	cout << w << "\n";

	while(w--){
		cout << *math.begin() << " "; math.erase(math.begin());
		cout << *pro.begin()  << " "; pro.erase(pro.begin());
		cout << *spo.begin()  << " "; spo.erase(spo.begin());
		cout << "\n";
	}
}