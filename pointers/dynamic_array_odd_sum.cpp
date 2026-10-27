#include <iostream>
using namespace std;

int* array(int size){
 int *a= new int[size];
  cout << "Enter " << size << " elements: "<<endl; 
 for(int i ;i<size;i++){
  cin >> a[i]; 
  cout<<endl;
 
 }
 return a;
}

int OddSum(int *a, int size){
 int sum=0;
 for(int i=1 ;i<size;i+2){
   sum += a[i]; 
   return sum;
 }
 
}

int main() {
 
 int x;
 cout<<"enter the size :  ";
 cin>>x;
 int *s;
 s=array(x);
 
   cout << "\nThe elements of the  array are: \n";

   for (int i = 0; i < x; i++) { 
      cout << s[i] << " ";           
    }  
int y;
y=OddSum(s, x);
cout<<endl<<"the sum : "<<y;



   
  return 0;

 }
