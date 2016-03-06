#include<iostream>
#include<fstream>
using namespace std;

int main()
{
int sum=0,i,a[100];//定义数组和为0,存放数组
ifstream f("d:\\数据来源.txt");
for(i=0;f>>a[i],i<100;i++)//流提取云算符
{sum+=a[i];}
cout<<"数组求和为："<<sum<<endl;
return sum;
}
