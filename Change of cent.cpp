/*  Write a prigrame in which we will give a change in cents by a user and find out its half dollars how muchis possible and 
and then its quarter and then Dimes,nikel and at last change of pennies.
*/
#include<iostream>
#include<conio.h>
//    #include<stdlib.h>  // it is the standard library header file of clear screen.
using namespace std;
const int half_dollar=50; //50% is half of 100.
const int quarter=25;  //quarter means 4th part of 100% which is 25%.
const int dime=10;    // dime means 1st (one out of 10 parts equily divided) part of 100% which is 10%.
const int nikel=5;     //Nikel means 5 percent of 100% which is 5%.

int main()
{
	int change;
	cout<<"Enter change in cents= ";
	cin>>change;
	cout<<endl;
cout<<"----------------------------------------------------------------------------------------------------\n";
	cout<<"Find out the maximum number of half_dollars in given cents/change as much as possible is equal to= "
	<<change/50<<endl;
	change=change % half_dollar;
	
	cout<<"Find out the maximum number of Quarters in given cents/change as much as possible= "<<change/25<<endl;
	change=change % quarter;
	
	cout<<"Find out the maximum number of Dimes in given cents/change as much as possible= "<<change/10<<endl;
	change=change % dime;
	
	cout<<"Find out the maximum number of Nikels in given cents/change as much as possible= "<<change/5<<endl;
	change=change % nikel;
	
	cout<<"Remaining Pennies in given cents/change is = "<<change<<endl;
	
	cout<<"----------------------------------------------------------------------------------------------------\n";
	/* system ("pause");
	system ("cls");  */
	getch();
	return 0;
}
   
