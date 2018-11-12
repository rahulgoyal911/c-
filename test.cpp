#include<fstream>
using namespace std;
#include<iostream>
main()
{
string a;
ifstream i;
ofstream o;

i.open("read.txt");
char ch;
while((ch=i.get())!=EOF)
{
o.open("write.txt");
o<<ch;
o.close();
}
i.close();


}
