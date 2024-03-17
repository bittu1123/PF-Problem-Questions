#include <iostream>
#include <fstream>

using namespace std;



//  STEP 1
int return_Records(char* document) {

int size = 0;

ifstream ifile(document);

if (!ifile) {

cerr << "Error opening file: " << document << endl;
return -1; 
}

char ch;

while (ifile.get(ch)) {

size++;
}


return size;
}





//  STEP 2
int* dynamic_array(int size){
	
int*arr=new int[size];
	
return arr;
}




//  STEP 3
void input_Array(int*arr, int size){
	
for(int i=0;i<size;i++){
	
cin>>arr[i];	
    
}	
}




//  STEP 4
void show_Array(int*arr, int size){
	
for(int i=0;i<size;i++){
	
cout<<arr[i]<<" ";	
    
}		
}




//  STEP 5
int* get_Array(int*arr, int size){
	
return arr;	
}





//  STEP 6
int* even_array(int*arr, int size, int& count){

int *temp=new int[size];

count=0;

for(int i=0;i<size;i++){

if(arr[i]%2==0){
	
temp[count]=arr[i];   
count++;

}
}

int* evenArray=new int[count];

for(int i=0;i<count;i++){
	
evenArray[i] = temp[i];   
   
}

delete[]temp;

return evenArray; 
}





//  STEP 7
int* shrink_array(int*arr,int size){
	
int* count=new int[size-1];
	
for(int i=0;i<size-1;i++){
		
count[i]=arr[i];
		
}
	
return count;
}





int main(){
	


	//  STEP 1
	char document[] = "document.txt"; 
     
    int size = return_Records(document);

    cout<<"Number of Records in File are: "<<size<<endl<<endl;

    

    //  STEP 2	
	int*arr = dynamic_array( size);

	
	
	
	//  STEP 3
	cout<<"Enter Array Elements: \n";
	
	input_Array(arr, size);
	
	cout<<endl;
	
	
	
	//  STEP 4
	cout<<"Your Array Elements: \n";
	
	show_Array(arr, size);
	cout<<endl;
	
	
	
	
	//  STEP 5
	int* A = get_Array(arr, size);
	
	cout<<endl;
	
	cout<<"Your Return Elements from get Array function \n";
	
	for(int i=0;i<size;i++){
		
	cout<<A[i]<<" ";
		
	}
	
	
	
	cout<<endl;
	cout<<endl;




    //  STEP 6
	int count;
				
	int* B = even_array(arr, size, count);
	
	cout<<"Even Elements from Even Array function \n";
	
	for(int i=0;i<count;i++){
		
	cout<<B[i]<<" ";
		
	}
	
	
	
	cout<<endl;
	cout<<endl;
	
	
	
	//  STEP 7
	int*C = shrink_array(arr, size);
	
    cout<<"Shrink Elements from Shrink Array function \n";
	
	for(int i=0;i<size-1;i++){
		
	cout<<C[i]<<" ";
		
	}
	
	
	
	delete[]arr;
	delete[]B;
	delete[]C;
	
	
	
return 0;	
}







