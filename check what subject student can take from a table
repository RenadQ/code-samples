
#include<iostream>
#include<string>
using namespace std;
int main()
{
string names[4]={"Ahmed","Khalid","Omar","Faisal"};
string courses[5]={"CS211","CS221","CS311","MATH301","CIS321"};
string grades[4][5]={{"A+","A+","N","A","N"},{"A","B","A","F","B"},{"C","F","D+","C","N"},{"A","B+","DN","F","N"}};
int i,j,k;
string name;
cout<<"------------------------------------------------------------------------------------------"<<endl;
cout<<"\t|\t"<<courses[0]<<"\t|\t"<<courses[1]<<"\t|\t"<<courses[2]<<"\t|\t"<<courses[3]<<"\t|\t"<<courses[4]<<"\t|"<<endl;
cout<<"-----------------------------------------------------------------------------------------"<<endl;
for(i=0;i<4;i++){
cout<<names[i]<<"\t|";
for(j=0;j<5;j++){
if(grades[i][j]!="N"){
cout<<"\t"<<grades[i][j]<<"\t|";
}
else{
cout<<"\t\t|";
}
}
cout<<"\n";
cout<<"------------------------------------------------------------------------------------------"<<endl;
}
//q2-part3

string nameh ; 
int hours=0;
cout<<"enter a student name to calculate How many credit hours has taken :  ";//take input from user
cin>>nameh;

//compare if the user input=ahmed in captel or lower case
if((nameh=="Ahmed")||(nameh=="ahmed")){
	for(int m=0;m<4;m++){
		if(grades[0][m]!="N"){ hours=hours+3;}//check evre elimet from the array if it equl agrade calclute that one grade =3 hourse
		}
	cout<<"the student Ahmed finish "<<hours<<"  hours"<<endl;}//print the hourse after calclute them

//compare if the user input=khalid in captel or lower case
 else if((nameh=="Khalid")||(nameh=="khalid")){
	for(int m=0;m<5;m++){
		if(grades[1][m]!="N"){hours=hours+3;}//check evre elimet from the array if it equl agrade calclute that one grade =3 hourse
	}	
	cout<<"the student khalid finish "<<hours<<"  hours"<<endl;
}


//compare if the user input=omar in captel or lower case
else if((nameh=="omar")||(nameh=="Omar")){
	for(int m=0;m<4;m++){
		if(grades[2][m]!="N"){hours=hours+3;}//check evre elimet from the array if it equl agrade calclute that one grade =3 hourse
	}
	cout<<"the student omar finish "<<hours<<"  hours"<<endl;
}

//compare if the user input=faisal in captel or lower case
else if((nameh=="Faisal")||(nameh=="faisal")){
	for(int m=0;m<4;m++){
		if(grades[3][m]!="N"){hours=hours+3;}//check evre elimet from the array if it equl agrade calclute that one grade =3 hourse	
}
	cout<<"the student Faisal finish "<<hours<<"  hours"<<endl;
}


//q2-part4

int pass=0;
string passcourse;
cout<<"enter a student name to show How many courses he finish :  ";
cin>>passcourse;

//compare if the user input=ahmed in captel or lower case
if((nameh=="Ahmed")||(nameh=="ahmed")){
	for(int m=0;m<4;m++){
		if((grades[0][m]!="N")&&(grades[0][m]!="F")&&(grades[0][m]!="DN")){pass++;	}//check evre elimet from the array if it not equl agrade calclute that pass+1 course	
	}
	cout<<"the student ahmed pass "<<pass<<"  coures"<<endl;
}


//compare if the user input=khalid in captel or lower case

else if((nameh=="Khalid")||(nameh=="khalid")){
	for(int m=0;m<5;m++){
		if((grades[1][m]!="N")&&(grades[1][m]!="F")&&(grades[1][m]!="DN")){pass++; }//check evre elimet from the array if it not equl agrade calclute that pass+1 course	
	
	}
	cout<<"the student khalid pass "<<pass<<"  coures"<<endl;
}
//compare if the user input=omar in captel or lower case

else if((nameh=="omar")||(nameh=="Omar")){
	for(int m=0;m<4;m++){
		if((grades[2][m]!="N")&&(grades[2][m]!="F")&&(grades[2][m]!="DN")){pass++;}//check evre elimet from the array if it not equl agrade calclute that pass+1 course	
	
	}
	cout<<"the student omar pass "<<pass<<"  coures"<<endl;
}
//compare if the user input=faisal in captel or lower case

else if((nameh=="Faisal")||(nameh=="faisal")){
	for(int m=0;m<4;m++){
		if((grades[3][m]!="N")&&(grades[3][m]!="F")&&(grades[3][m]!="DN")){pass++;	}//check evre elimet from the array if it not equl agrade calclute that pass+1 course
	}
	cout<<"the student faisal pass "<<pass<<"  coures"<<endl;
}








 return 0;
}

