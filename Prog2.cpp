#include<iostream>
#include<fstream>
using namespace std;

ArraySum(int l)
{
	int *a,sum=0,i;
	a=new int[l];
	ifstream f("d:\\������Դ1.txt");
	for(i=0;f>>a[i],i<l;i++)//����ȡ�����
	{sum+=a[i];}
	cout<<"�������Ϊ��"<<sum<<endl;
	return sum;
}
void main()
{
	int l=0;
	cout<<"�����������鳤��Ϊ��";
	cin>>l;
	ArraySum(l);
}

