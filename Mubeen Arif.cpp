#include<iostream>
using namespace std;
int main()
{

	for(int squere=1;squere<=10;squere++)
	{	
	if(squere==5)
	continue;
	cout<<squere*squere<<endl;}
	         // while loop
	cout<<"while loop here";
int squere1=1;
while(squere1<=10)
	{
	if(squere1==5){
	squere1++;
	continue;
	}
	cout<<squere1*squere1<<endl;
	squere1++;
}
            // do while loop
	cout<<"do while loop here";
int squere2=1;
do	{
	if(squere2==5)
	{squere2++;
	continue;
	}
	cout<<squere2*squere2<<endl;
	squere2++;}
	while (squere2<=10);
}




