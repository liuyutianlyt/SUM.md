#include<iostream>
#include<fstream>
using namespace std;

int main()
{
int sum=0,i,a[100];//���������Ϊ0,�������
ifstream f("d:\\������Դ.txt");
for(i=0;f>>a[i],i<100;i++)//����ȡ�����
{sum+=a[i];}
cout<<"�������Ϊ��"<<sum<<endl;
return sum;
}
