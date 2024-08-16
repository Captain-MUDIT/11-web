#include<iostream>
using namespace std;
int main() {
	int a , b ;
	char op;
	cout << "Enter a: ";
	cin >> a;
	cout <<"Enter b: " ;
	cin >> b;
	cout << "Enter Operation: ";
	cin >>  op;
	if(op=='+') cout << "Addition: "<< a+b;
	else if(op=='-') cout <<  "Subtraction: " << a-b;
	else if(op=='*') cout <<  "Multiplication: " << a*b;
	else if(op=='/'){
		 if(b==0) cout << "Not possible";
		 else cout << "Division: " << a/b;
	}
	else cout << "Invalid Operator"<<endl;
	cout << endl;
	return 0;


