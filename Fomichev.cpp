#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;

float getF_x(int x){
	float f_x = sin(x*x)+sqrt(x)
	return f_x;
}


int main(){
	int x = 0;
	cout<<"f(x) = sin(x*x)+sqrt(x)"<<endl;
	cout<<"x = "; cin>>x;
	cout<<"f(x) = "<<getF_x(x);
	return 0;
}

