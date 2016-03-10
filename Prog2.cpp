#include<iostream>
#include<fstream>
using namespace std;

ArraySum(int l)
{
	int *a,sum=0,i;
	a=new int[l];
	ifstream f("d:\\数据来源1.txt");
	for(i=0;f>>a[i],i<l;i++)//流提取云算符
	{sum+=a[i];}
	cout<<"数组求和为："<<sum<<endl;
	return sum;
}
void main()
{
	int l=0;
	cout<<"输入任意数组长度为：";
	cin>>l;
	ArraySum(l);
}

