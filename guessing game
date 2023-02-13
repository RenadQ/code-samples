#include <iostream>
using namespace std;

int main()
{
    //declaring variables
   int num1, num2, size, i, j; 
   bool FoundFirst = false, FoundSecond = false;
   
    //reading the two numbers from user1
   cout<<"First Person:"<<endl;
   cout<<"Please enter the first number: ";
   cin>>num1;
   cout<<"Please enter the second number: ";
   cin>>num2;   
   
    //reading the number of values that user2 wants to input 
   cout<<endl<<"Second Person:"<<endl;
   cout<<"How many numbers would you like to enter? ";
   cin>>size;
   
   //using array for user2 inputs
   int numbers[size];

   //reading the numbers from user2
   for (i=0; i<=size-1; i++)
    {
        cout<<"Please enter your #"<<i+1<<" number:";
        cin>>numbers[i];
        
        //checking if num1 and num2 are in numbers[]
        for (int j = 0; j <= size-1; j++) 
        {
            if (num1 == numbers[j]) 
            {
                FoundFirst = true;
            }
                if (num2 == numbers[j]) 
                {
                    FoundSecond = true;
                }
        }
        //exit loop if num1 and num2 are found
        if ( FoundFirst == true && FoundSecond == true) 
        {
            break;
        }
    }
    
    //displaying texts depending on the availability of the two numbers in the array
    if (FoundFirst == true && FoundSecond == true)
    {
        cout<<"Both numbers were found!";
    }
    if (FoundFirst == false && FoundSecond == false)
    {
        cout<<"Neither number "<<num1<<" nor number "<<num2<<" were found.";
    }
    if (FoundFirst == true && FoundSecond == false)
    {
        cout<<num1<<" was found!";
    }
    if (FoundFirst == false && FoundSecond == true)
    {
        cout<<num2<<" was found!";
    }            
            
    return 0;
}
