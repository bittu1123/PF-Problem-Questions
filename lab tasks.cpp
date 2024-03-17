/*      TASK 1

#include <iostream>
using namespace std;

int main() {

const int COUNTRIES = 7;
const int MEDALS = 3;

int count[COUNTRIES][MEDALS] = {

{1,0,1},
{1,1,0},
{0,0,1},
{1,0,0},
{0,1,1},
{0,1,1},
{1,1,0},

};


return 0;
}*/





/*  TASK 2

#include <iostream>
using namespace std;

int main() {


int data[5][4] = {

{16,3,2,13},
{51,1,10,28},
{9,6,7,12},
{41,5,14,1},
{23,4,53,1},

};


return 0;
}*/




/*   TASK 3

#include <iostream>
using namespace std;

int main() {

const int COUNTRIES = 7;
const int MEDALS = 3;

int count[COUNTRIES][MEDALS] = {

{1,0,1},
{1,1,0},
{0,0,1},
{1,29,0},
{0,1,1},
{0,1,1},
{1,1,0},

};

cout<<count[3][1];

return 0;
}*/



/*    TASK 4

#include <iostream>
using namespace std;

int main() {

	int total = 0, i;

	const int COUNTRIES = 7;
	const int MEDALS = 3;

	int count[COUNTRIES][MEDALS] = {

		{ 1, 0, 1 },
		{ 1, 1, 0 },
		{ 0, 0, 1 },
		{ 1, 29, 0 },
		{ 0, 1, 1 },
		{ 0, 1, 1 },
		{ 1, 1, 0 },

	};

	for (int j = 0; j<MEDALS; j++){

		total = total + count[i][j];

	}

	cout << total;

	return 0;
}*/




/*   TASK 5

#include <iostream>
using namespace std;

int main() {

int total=0 , n;

const int COUNTRIES = 7;
const int MEDALS = 3;



int count[COUNTRIES][MEDALS] = {

{ 1, 0, 1 },
{ 1, 1, 0 },
{ 0, 0, 1 },
{ 1, 29, 0 },
{ 0, 1, 1 },
{ 0, 1, 1 },
{ 1, 1, 0 },

};

cout << "Add Row Number: " ;
cin >> n;

if(n<=6){

for (int j = 0; j<MEDALS; j++){

total = total + count[n][j];

}

cout <<"Total is "<< total;
}

else{

cout<<"This Row is not Exist.";

}

return 0;
}*/




/* TASK 6

#include <iostream>
using namespace std;

int main() {

int total=0 , n;

const int COUNTRIES = 7;
const int MEDALS = 3;



int count[COUNTRIES][MEDALS] = {

{ 1, 0, 1 },
{ 1, 1, 0 },
{ 0, 0, 1 },
{ 1, 29, 0 },
{ 0, 1, 1 },
{ 0, 1, 1 },
{ 1, 1, 0 },

};

cout << "Add Column Number: " ;
cin >> n;

if(n<=2){

for (int i = 0; i<COUNTRIES; i++){

total = total + count[i][n];

}

cout <<"Total is "<< total;
}

else{

cout<<"This Column is not Exist.";

}

return 0;
}*/




/*#include <iostream>
using namespace std;

int main() {
	
    char ch;
	int total1=0 ,total2=0,n1 ,n2;

    const int COUNTRIES = 7;
    const int MEDALS = 3;



    int count[COUNTRIES][MEDALS] = {

    { 1, 0, 1 },
    { 1, 1, 0 },
    { 0, 0, 1 },
    { 1, 29, 0 },
    { 0, 1, 1 },
    { 0, 1, 1 },
    { 1, 1, 0 },

    };

    cout << "{ 1, 0,  1 }\n";
    cout << "{ 1, 1,  0 }\n";
    cout << "{ 0, 0,  1 }\n";
    cout << "{ 1, 29, 0 }\n";
    cout << "{ 0, 1,  1 }\n";
    cout << "{ 0, 1,  1 }\n";
    cout << "{ 1, 1,  0 }\n";

    cout << endl;

  cout << "Enter R for row or C for colunm : ";
    cin >> ch;

    cout << endl;

    if (ch == 'R' || ch == 'r'){
		
	
    cout << "Add Row Number: " ;
    cin >> n1;

    cout << endl;

    if(n1<=6){

    for (int j = 0; j<MEDALS; j++){
    total1 = total1 + count[n1][j];
    }

    cout <<"Total is "<< total1;
    
	}
	
	else{
    cout<<"This Row is not Exist.";
    }
	
	}

    else if (ch == 'C' || ch == 'c'){		


    cout << "Add Column Number: " ;
    cin >> n2;

    cout << endl;

    if(n2<=2){
    
    total2=0;
    
    for (int i = 0; i<COUNTRIES; i++){
    total2 = total2 + count[i][n2];
    }
    
    cout <<"Total is "<< total2;

	}

    else{
    cout<<"This Column is not Exist.";
    }
    
	}

    else{	
	cout<<"Given Character is Invalid.";	
    }

	return 0;
	
}*/



