#include<iostream>
using namespace std;

class Addition
{
	public:
		double sum;
		Addition()
		{
			
			sum=0;
		}
		
		Addition(int a, int b)
		{
			sum =  a + b;
		}
		
		Addition(double a, double b)
		{
			sum =  a + b;
		}
		
		int add(int a, int b)
		{
			return a + b;
		}
		
		double add(double a, double b)
		{
			return a + b;
		}
		
		void disp()
		{
			cout << sum << endl;
		}	
};

int main()
{
	Addition o1;
	Addition o2(4, 5);
	Addition o3(1.5, 2.5);
	
	//cout << o1.add(4, 3) << endl;
	//cout << o1.add(1.5, 4.5) << endl;
	
	o1.disp();
	o2.disp();
	o3.disp();
	return 0;
}
