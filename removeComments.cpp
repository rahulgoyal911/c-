using namespace std;
#include<fstream>
#include<iostream>
#include<stack>
main()
{
	ifstream i;
	ofstream o;
	i.open("input.txt");
	o.open("output.txt");
	char c;
	int flag=0;
	while(i.get(c))
	{
		if(c=='/' && flag==0)
		{
			flag=1;
		}
		else if(c=='/' && flag==1)
		{
			//ignore that line
			//singleline
			while(c!='\n'){
			i.get(c);
			}
			flag=0;
		}
		else if(c=='*' && flag==1)
		{
			//multiline started
			while(c!='*'){
			i.get(c);
			}
			while(c!='/'){
			i.get(c);		
			}
			flag=0;
			//o<<c;
		}
		else{
		o<<c;
		}
	}
	i.close();
	o.close();
	return 0;
}
	
