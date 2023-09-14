#include<iostream>
using namespace std;

class Test {
	private:
		int a=0, b=0, add=0, sub=0, mul = 0;
		float div=0;
	public:
		/*void get();
		void addition();
		void subtraction();
		void multiplication();
		void division();*/
		
		 void get () {
			cout<<"Enter the value of a and b: ";
			cin>>a>>b;
		}
		
		inline void addition() {
			add = a+b;
			cout<<"the sum is "<<add<<endl;
		}
		
		inline void subtraction() {
			sub = a-b;
			cout<<"The subtraction is: "<<sub<<endl;
		}
		
		inline void multiplication() {
			mul = a*b;
			cout<<"The product is: "<<mul<<endl;
		}
		
		inline void division() {
			div = a/b;
			cout<<"The division is: "<<div<<endl;
		}
};

int main () {
	
	Test obj;
	obj.get();
	obj.addition();
	obj.subtraction();
	obj.multiplication();
	obj.division();
	return 0;
}
