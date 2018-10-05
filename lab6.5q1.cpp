
//load library
#include<iostream>   

using namespace std;   
//using main function
int main()    
{
	//variable declaration for number of apples, mangoes and bananas respectively
	int x,y,z;
        int n=1;         //variable to indicate variation number
	//loop to check if the equations x+y+z=100 and x+3y+0.5z=100 are satisfied or not
	for(x=0;x<100;x++)             //nested for loops to check for all variations of the no. of fruits such that equations x+y+z=100 and x+3y+0.5z=100 are satisfied
	{
		for(y=0;y<100;y++)
		{
			for(z=0;z<100;z++)
			{
				if(x+y+z==100 && x+3*y+0.5*z==100)             //checks if the equations x+y+z=100 and x+3y+0.5z=100 are satisfied or not and if so then displays it
				{  
                                        cout<<"Variation "<<n<<" :"<<endl;                 //displays the variations in number of fruits bought separately
					cout<<"The no. of apples is "<<x<<endl;
					cout<<"The no. of mangoes is "<<y<<endl;
					cout<<"The no. of bananas is "<<z<<endl<<endl;
                                        n++;                                             
				} 
                                else
                                   continue; 
			}
		}
	}

	//return statement
	return 0;
}
