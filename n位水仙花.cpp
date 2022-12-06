#include <iostream>
#include<cmath> 
using namespace std;
int main()
{
    void shuixianhua(int a);
	int N;
	cout<<"请输入水仙花位数："; 
	cin>>N;
	cout<<N<<"位数的水仙花数有："<<endl; 
	shuixianhua(N);
	return 0;
}
void shuixianhua(int a)
{
	int m,t;
	int sum;
	for(sum=pow(10,a-1);sum<pow(10,a);sum++){
	int total=0;
	t=sum;
	if(a<=3){
	for(int i=0;i<a;i++)
	{
	m=t%10;
	total+=pow(m,3);
	t/=10;
    }
	if(total==sum){	cout<<sum<<endl; }
	} 
	else{
    for(int i=0;i<a;i++)
	{
	m=t%10;
	total+=pow(m,a);
	t/=10;
    }
	if(total==sum){	cout<<sum<<endl;}}
   }
}

