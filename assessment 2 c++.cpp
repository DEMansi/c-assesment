#include<iostream>
using namespace std;
class A{
	public:
		string nl; 
		string ns; 
		string nc;
		int nls;
		int i;
		A()
		{
			for(i=1;i<=5;i++)
			{
				cout<<"\nName of course : ";
		        cin>>nc;
		        cout<<"\nName of the subject : ";
		        cin>>ns;
		        cout<<"\nName of the lecturer : ";
		        cin>>nl;
		        cout<<"\nNumber of lecturer : ";
		        cin>>nls;
			}
		}
};
int main()
{
	A obj;
	
}s
