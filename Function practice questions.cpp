/*#include<iostream>
using namespace std;

int function();

int function( int n1, int n2){
	
if(n1>n2){
	
	cout<<n1<<" is greater.";
	
}	
	else{
		
		cout<<n2<<" is greater."; 
		
	}
}


int main(){
	
int n1,n2;

cout<<"Enter: \n";
cin>>n1>>n2;

    function( n1, n2);
	
	
	return 0;
}*/





/*#include<iostream>
using namespace std;

int function();

int function( int n){
	
	for(int i=1;i<=10;i++){
		
		int mul=n*i;
		cout<<n<<"*"<<i<<"="<<mul<<endl;
		
	}
	
}


int main(){
	
int n;

cout<<"Enter: \n";
cin>>;


    function(n);
	
	return 0;
}*/




/*#include<iostream>
using namespace std;

int function();

int function( int n){

int i=n;

if(n){
	
	++i;
	cout<<"The Number after "<<n<<" is "<<i<<endl;
}

if(n){
	--i;
	--i;
	cout<<"The Number before "<<n<<" is "<<i<<endl;
}
}


int main(){
	
int n;

cout<<"Enter: ";
cin>>n;
	
	cout<<endl;
	
function(n);
	
	return 0;
}*/





/*#include<iostream>
using namespace std;

int function();

int function( int n){

int c=0;

for(int i=2;i<n;i++){
	
	if(n%i==0){
		c=1;
	}
}

if(n%2==0 && c==0){
	
	cout<<"prime even number.";
}
else if(n%2!=0&&c==0){
	
cout<<"prime odd number.";
	
}
else if(n%2==0&&c!=0){
	
cout<<"even number but not prime.";	
}
else if(n%2!=0&&c!=0){
	
cout<<"odd number but not prime.";
	
}
else{
	
	cout<<"not prime number.";
}

}



int main(){
	
int n;

cout<<"Enter: ";
cin>>n;
	
	cout<<endl;
	
function(n);
	
	return 0;
}*/




/*#include<iostream>
using namespace std;

int function();

int function( int n1, char ch){

for(int i=1;i<=n1;i++){
	
	for(int j=1;j<=n1;j++){
		
		cout<<ch<<" ";
	}
     cout<<endl;
}


}




int main(){
	
int n1;
char ch;

cout<<"Enter: ";
cin>>n1>>ch;
	
	cout<<endl;
	
function(n1,ch);
	
	return 0;
}*/



/*#include<iostream>
using namespace std;

int function();

int function( int &n1, int &n2){

int n3;

n3=n1;
n1=n2;
n2=n3;


}




int main(){
	
int n1,n2;

cout<<"Enter N1: ";
cin>>n1;
	
	cout<<endl;
	
	
cout<<"Enter N2: ";
cin>>n2;

cout<<endl;

function( n1 , n2 );
	cout<<"N1 is "<<n1<<endl;
	cout<<"N2 is "<<n2;
	return 0;
}*/



/*#include<iostream>
using namespace std;

char grade(int);

char grade(int marks){
	
	if(marks>=80){
	cout<<"Your Grade is A";
    }
    
	else if(marks>=60){	
	cout<<"Your Grade is B";
	}
	
	else if(marks>=40){	
	cout<<"Your Grade is C";
	}
  
    else{	
	cout<<"You are Fail";
    }  

}


int main(){
	
int marks;

cout<<"Enter Marks: ";	
cin>>marks;


    grade(marks);

	
	
	return 0;
}*/







/*#include<iostream>
using namespace std;

int mul();

int mul(int n1, int n2){
	

	if(n2%n1==0){
		
		cout<<n2<<" is multiple of "<<n1<<endl;
	}
	
	else{
		
		cout<<n2<<" is not multiple of "<<n1<<endl;
	}
	
}



int main(){
	
int n1,n2;

for(int i=0;i<4;i++){


cout<<"Enter a pair of integers: \n";
cin>>n1>>n2;

cout<<endl;

 mul( n1 , n2);

cout<<endl;
	
    }
    
    
	return 0;
}*/





/*#include<iostream>
using namespace std;

	float area();

float area(int height, int base){
	
float area;

area=0.5*(height*base);
	
	cout<<endl;
	
	cout<<"Area is: "<<area;

}


int main(){
	
int height,base;

cout<<"Enter Height: ";
cin>>height;
    
cout<<"Enter Base: ";
cin>>base;

area( height, base);


    
	return 0;
}*/




/*#include<iostream>
using namespace std;

int sqr();
int cube();

int sqr(int n1){
	
int	A=n1*n1;
	
}	

int cube(int n2){

int B=n2*n2*n2;
	
}


int main(){
	

int n1,n2;

cout<<"Enter 1st numbrer: ";
cin>>n1;

cout<<"Enter 2nd numbrer: ";
cin>>n2;

int C=sqr(n1)+cube(n2);

cout<<"Ans is: "<<C;
    
	return 0;
}*/





/*#include<iostream>
using namespace std;

int divisor(int n1, int n2){
	
int	x;
	
	for(int i=2;i<=n1;i++){
	
	
	if(n1%i==0 && n2%i==0){
		
	x=i;
		
	}

    }
    
	return x;

}



int main(){
	

int n1,n2;

cout<<"Enter 1st numbrer: ";
cin>>n1;

cout<<"Enter 2nd numbrer: ";
cin>>n2;


if(n1>n2){
	
	int n3=n1;
	n1=n2;
	n2=n3;
	
}


int result=divisor(n1,n2);
    
    cout<<endl;
    
    cout<<"Highest common divisor is: "<<result;
    
	return 0;
}*/







/*#include<iostream>
using namespace std;

double sum(int n){
	
	double sum=1,fact=1,term=1;
	
     for(int i=1;i<=n;i++){
     	
     	fact=fact*i;
     	term=1/fact;
     	sum=sum+term;
		
	 }
     
	
     return sum;
     
}



int main(){
	
int n;	
	
	cout<<"Enetr: ";
    cin>>n;
    
    
 double result=sum(n);
 
 cout<<"Sum of series is: "<<result;
	
return 0;	
}*/





/*#include<iostream>
using namespace std;


int sqr(int arr[5]){
	
	for(int i=0;i<5;i++){
				
	cout<<arr[i]<<"\t"<<arr[i]*arr[i]<<endl;	
			
	}
				 	
}



int main(){
	
	int arr[5];
	
	for(int i=0;i<5;i++){
		
    cin>>arr[i]; 		
	  	
	}
	

	cout<<endl;

	sqr(arr);

	
	return 0;
}*/






/*#include<iostream>
using namespace std;


int sqr(int arr[5]){
	
	int count=0;
	
	for(int i=0;i<5;i++){
		
	if(arr[i]%2==0){
		
	count++;
			
	}
				 	
	}
	
	return count;
	
}



int main(){
	
	int arr[5];
	
	for(int i=0;i<5;i++){
		
    cin>>arr[i]; 		
	  	
	}
	

	cout<<endl;

	int result=sqr(arr);

	cout<<"Array contains "<<result<<" even elements"<<endl;	
	

	
	return 0;
}*/










