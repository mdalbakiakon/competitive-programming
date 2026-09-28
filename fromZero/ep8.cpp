// pointers

#include<bits/stdc++.h>
using namespace std;

void inc(int *x){
	(*x)++;
}

void inc_ref(int &x){
	x++;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int x = 4;

	// to store the address of x we declare *p_x; 
	// by * we declare that p_x will be a pointer
	int *p_x;
	p_x = &x; //& represent the address and we stored it into p_x;

	cout << p_x << endl; //showing the stored address value of x into p_x
	cout << *p_x << endl; //showing the value in that address;

	*p_x = 5;
	cout << x << endl;


	// array is by default a pointer
	int arr[5] = {1,2,3,4,5};
	cout << arr << endl; //arr holds the first value address
	cout << *arr << endl;
	cout << *(arr+1) << endl;


	// double pointer
	int y = 10;
	int *p_y;
	p_y = &y;
	cout << y << endl;
	cout << p_y << endl;
	cout << *p_y << endl;

	cout << endl;
	cout << endl;
	cout << endl;

	int **p_p_y;
	p_p_y = &p_y;
	cout << p_p_y << endl;
	cout << *p_p_y << endl;
	cout << **p_p_y << endl;

	cout << y << endl;
	**p_p_y = 8;
	cout << y << endl;
	



	int a = 1000;
	cout << a << endl;
	inc(&a);
	cout << a << endl;
	inc_ref(a);
	cout << a << endl;

}