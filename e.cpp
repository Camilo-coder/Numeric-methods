//This project is calculate the number e//
#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
//I'm gonna use the factorial definition of the number e for this calculation//
//And I'll compare two ways of create a factorial function//
//First: Normal way//
//Using long double for very long numbers//
long double Factorial(int n){
	//declarate r as an acumulator for the calculation//
	long double r=1;
	if(n>0){
        	for(int i=1;i<=n;i++){
            		r=r*i;
        	}
    	}
	//The factorial of 0 is 1 then: //
	else
		return 1;
    	return r;
}
//Second: Recursive way//
long double Recursive_Factorial(int n){
	//Here isn't nessesary the acumulator, just known the value of the factorial of 0 or 1, that is 1//
	if(n==0 || n==1){
		return 1;	
	}
	else
		return n*Recursive_Factorial(n-1);
}
//Now calculate the number e with the factorial functions//
//Using the first function and the definition of e=1/1!+1/2!+3/3!+...+1/n! where n is an integer//
double Nume(double precision){
        double e=1, cont=1;
        while(cont<=precision){
                e+=1/Factorial(cont);
                cont++;
        }
        return e;
}
//Using the second function//
double Recursive_Nume(double precision){
        double e=1, cont=1;
        while(cont<=precision){
                e+=1/Recursive_Factorial(cont);
                cont++;
        }
        return e;
}

int main(){
	double precision;
	cout<<"Precision: "<<endl;cin>>precision;
	cout<<setprecision(100)<<Recursive_Nume(precision)<<endl;
	cout<<setprecision(100)<<Nume(precision)<<endl;
	return 0;
}
