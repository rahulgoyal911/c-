using namespace std;
#include<iostream>
void toh(int n,char a,char b,char c)
{
	if(n==1)
	{
	cout<<"Move 1st disk from "<<a<<" to "<<c<<endl;
	return;
	}
	//a to b using c as a helper
	toh(n-1,a,c,b);
	cout<<"Move "<<n<<"th disk from "<<a<<" to "<<c<<endl;
	//b to c using a as helper
	toh(n-1,b,a,c);
	
}
int main()
{
toh(3,'a','b','c');
}
