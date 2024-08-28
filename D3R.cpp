//									#String 

//Q1- Print string 
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
	string f_name = "Prince";
	string l_name = "Kumar";
	cout<<f_name;
	cout<<l_name;
}

*/
k[]
//Q2 Concatenate the two string
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
	string name = "prince";
	string l_name = "Kumar";
	cout<<name +l_name<<endl;
	cout<<name +" "+l_name<<endl;
	cout<<name.append(l_name);
}
*/


//Q3 Adding number with string
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
	int x=10;
	string name = "prince";
	cout<<x+name;       // Error - We can't add string with number 
						//Only add string with string and integer  with integer
	
}
*/


	// Find the length of the string 

/*	 			
#include<iostream>
#include<string>
using namespace std;
int main(){
	string name = "Prince Kumar";
	cout<<name.length()<<endl;  //use length() or size() function to find the length of string
	cout<<name.size();
}

*/

// Access the string charecters 

/*
#include<iostream>
#include<string>
using namespace std;
int main(){
	string name = "Prince Kumar";
	cout<<name[0]<<endl;    //print 1st element of string
	cout<<name[name.length() - 1] ;   //last element of string
	cout<<endl;
	name[5] = 'P';

	cout<<name ;
}
*/

//We can also use at() function for accessing the string element 
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
	string name = "Prince Kumar";
	cout<<name.at(0)<<endl;
	cout<<name.at(name.length() - 1)<<endl;
}
*/






