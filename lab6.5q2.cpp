
//load library
#include<iostream>   

using namespace std;   //namespace 

int accept()      //function to accept input from user
{
        int sales;
	cout<<"Enter the number of pairs of shoes sold per week"<<endl;
	cin>>sales;       //accepts sales per week
        return sales;     
}


int op1()           //returns salary of Rs 600 per week
{
	int salary=600; 
	return salary;
}


int op2(int sales)    //returns a salary of Rs 280 + 10% commission on the sales
{
	int salary;
	salary = 7*40 + 0.1*sales*225;
	return salary;
}


int op3(int sales)   //returns salary of 20% on commission along with Rs 20 per pair of shoes without a separate fixed amount of salary
{
	int salary;
	salary = 1.2*sales*20;
	return salary;
}

void display(int salary,int x)   //function to display the final salary of salesperson
{
	cout<<"The best option for the salesperson is option "<<x<<endl;     //displays the option most beneficial to the salesperson
	cout<<"The final salary of the salesperson is "<<salary<<endl;
}

//using main function
int main()   
{
	//variable declaration
	int salary,sales,temp1,temp2,temp3,y;   //variable y keeps track of the most suitable option 
	sales=accept();    //asks user for the input of no. of pairs of shoes sold per week
	temp1=op1();          //temporary variables temp1,temp2,temp3 to store the possible values of variable salary
	temp2=op2(sales);
	temp3=op3(sales);
	if(temp1>temp2 && temp1>temp3)          //compares the possible values of salary and assigns the same to variable salary
	{
		salary=temp1;
		y=1;
	}
	else if(temp2>temp1 && temp2>temp3)         //compares possible values of salary and assigns the same to variable salary
	{
		salary=temp2;
		y=2;
	}
	else
	{
		salary=temp3;                        //compares possible values of salary and assigns the same to variable salary
		y=3;
	}

	display(salary,y);    //displays the suitable option and salary of the salesperson
	return 0;     //return statement
}


