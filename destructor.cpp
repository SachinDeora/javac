using namespace std;
#include<iostream>
class a
{
	public:
		int x;
		a();
		void show();
		~a()
		{
			cout<<"destructor is called"<<endl;
		}
		a(int s);
		
};
a :: a()
{
	cout<<"constructor is called"<<endl;
	

}
void a::show()
{
	cout<<"check is called";	
}
a ::a(int s)
{
	x=s;
	cout<<"value of x is :-"<<x<<endl;
}
a t;
void check()
{
	cout<<"Checks is called"<<endl;
	a s;
}
int main()
{
	a obj;
	a obj1(2);
	cout<<"working here";
	check();
	return 0;
}


