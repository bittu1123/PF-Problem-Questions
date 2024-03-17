#include<iostream>
#include<fstream>

using namespace std;


void alpha() {

	ifstream file;
	file.open("OUT.txt");


	if (!file.is_open()){

		cout << "error Opening in File.";

}

	int count = 0;
	char ch;
	
	while (!file.eof()) {

		file.get(ch);
		if(isalpha(ch))
		count++;

	}

	cout << "Number of Alphabets in File are: "<<count;

	file.close();
}



	/*int arr[30];
	int n;

	cout << "Enter Number Of Inputs: \n";
	cin >> n;
	
	cout << endl;

	cout << "Enter Number Of Array Elements: \n";

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		cout << endl;
	}


	fstream file;
	file.open("data.txt",ios::out);
	
	for (int i = 0; i < n; i++) {
		file << arr[i]<<" ";
	}

	file.close();

	file.open("data.txt", ios::in);


	int arr2[40];

	for (int i = 0; i < n; i++) {
		file >> arr2[i];
	}

	cout << "Data in File is: \n";

	for (int i = 0; i < n; i++) {

		cout << arr2[i] << " ";
	}

	file.close();*/



   /*fstream file;
	file.open("data.txt");

	for (int i = 0; i < 10; i++) {

		cin >> i;
		file << i;
	}

	file.close();*/





	/*fstream file;
	file.open("data.txt");

	char string[300]="Hello This is Rehan Manzoor";

		cout << string;

		file << string; 


	file.close();*/



	int main(){


	alpha();


	return 0;
}





