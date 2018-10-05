//load library
#include<iostream>  
//using namespace
using namespace std;   
int squarecond(long x)           //function to check if the number is a perfect square
{ 
        int z=0;
	long temp;
	for(int j=1;j<500000;j++)        //compares numbers whose square root is upto a range of 500000
	{
	     temp=j*j;
	     if(x==temp)
                z++;
        }
	
        return z;
}


void sumcondgen(int m)  //function to validate if the number is the sum of consecutive integers starting from 1 and also generates the number
{
        int y=0;        //variable declaration
	long temp;   
	int z;
	for(int i=1;i<500000;i++)                 //goes upto a range of 500000 for sum of consecutive integers
	{
		temp=(i*(i+1))/2;
		z=squarecond(temp);             //function call for checking if variable temp is a perfect square or not
		if(z==0)                          //z==0 implies that the variable temp is not a perfect square and hence reiterates the loop             
		   continue;        
                else
                {
                   cout<<temp<<endl;  
                }
                y++;                      
                if(y==m)                       
                   break;
                  
	}

}


int main()
{
	//variable declaration
	int m;
	//asks user for the input of the number of terms required
	cout<<"Enter the number of terms required:"<<endl;
	//accepts the input
	cin>>m;
	//displays the sequence of numbers
	cout<<"Sequence of numbers:"<<endl;
	//function call for generating the sequence
	sumcondgen(m);
	//return statement
	return 0;
}




