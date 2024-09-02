#include <iostream>
using namespace std;
void sumUntilNegative(){
	int sum=0;
	int n;
	do
	{
	cout<<"enter a num"<<endl;
	cin>>n;
	if(n>=0){
	sum+=n;
}
}
while(n>=0);
	cout<<"sum of entered Number:"<<sum<<endl;
}
int main (){
	sumUntilNegative();
	return 0;
}
	