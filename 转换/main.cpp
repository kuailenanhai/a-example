#include<iostream>
#include<vector>

using namespace std;

int main()
{
	double pi=3.1415926;
	vector<int > line1;
	line1.push_back(1);
	line1.push_back(2);
	line1.push_back(3);
	int b1=line1.size();
	int a[]={1,2,3,4,5,6,7,8,9};
	int b=sizeof(a)/sizeof(int);//对于数组只能采用这种方法
	cout<< b1 <<endl;
	cout<< b <<endl;
	int number =static_cast<int >(pi);
	cout<< number<<endl;
	system("pause");
	return 0;
}