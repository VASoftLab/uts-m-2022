#include <iostream>
#include "F_x.cpp"
using namespace std;

int main(){
	int x = 0;
	cout<<"f(x) = 3*sin(x)-2*cos(x)+rand(x)"<<endl;
	cout<<"x = "; cin>>x;
	cout<<"f(x) = "<<getF_x(x);
	return 0;
}

