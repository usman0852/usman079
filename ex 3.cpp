#include<iostream>
using namespace std;
int main(){
	double num[5]={3,4,5,6,7};
	double sum=0;
	double count=0;
	double avg;
	cout<<"the numbers are: "<<endl;
	for(int i=0;i<6;i++){
		cout<<num[i];
		sum+=num[i];
		++count;
	}
	cout<<"sum is: "<<sum<<endl;
	avg=sum/count;
	cout<<"avg is"<<avg<<endl;
	return 0;
}
