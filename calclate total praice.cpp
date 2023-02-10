//renad alkahtani-2220003572
#include<iostream>
#include<string>
using namespace std;
typedef double* arrayPtr;//new type to maake pointer declaration easier
//function that calclute the total price then retun it as a double
double calculateTotalPrice(arrayPtr price,arrayPtr cup){
 int size=7;//7 days in week
 double total=0;
 //for loop to calculate the total=cup*price
 for(int i=0;i<size;i++){
 total+=cup[i]*price[i];
 }return total;}
 //function to fill the dynamic array
void fillarray(arrayPtr price,arrayPtr cup){
 int size=7;
 //take number of cops that the user order and price
 cout<<"pls enter number of cups and the price :"<<endl;
 for(int i=0;i<size;i++){
 cout<<" Day : "<<i+1<<endl<<"----------------------"<<endl<<"number of cups: ";
 cin>>cup[i];
 cout<<"price: ";
 cin>>price[i];
 cout<<endl;
 }
}

int main(){
	
//create a dynamic array that take space in run time using pointer
 arrayPtr price=new double[7];
 arrayPtr cup=new double[7];
 
 fillarray(price,cup);
 
 cout<<"Total price: "<<calculateTotalPrice(price,cup)<<" SR"<<endl;
 
 delete []price;
 delete []cup;

	
	
	
	
	return 0;
}
