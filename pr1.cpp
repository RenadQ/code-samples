#include <iostream>
using namespace std ;

int sum(int size ){
	int num[size];
	int sum,max,min;
	for(int i=0;i<size;i++){
		cout<<"enter num "<<i+1<<endl;
		cin>>num[i];
		sum +=num[i];
		
		if(num[i]<min){
			min=num[i];
		}
		else if(num[i]>min){
			max=num[i];
		}
	}
	cout<<"the sum is "<<sum<<endl;
	cout<<"the avr is "<<sum/size<<endl;
	cout<<"the max is "<<max<<endl;
	cout<<"the min is "<<min<<endl;

}

int main() {
	int size;
	cout<<"enter size"<<endl;
	cin>>size;
	sum(size);
	return 0;
}
