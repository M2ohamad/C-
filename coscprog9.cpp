
/* 1410
 * Program 9
 * Student: Mohamad Mohamad
 * TA: Salim El Awad
 * Date: 4/11/2016
 */
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <string>
using namespace std;
const int NAME_SIZE = 30;
const int MAX_EMPLOYEES = 100;

struct employee{
	char fname[30];
	char lname[30];
	double salary;
	int empID;
};

class company{
private:
	char allemp[MAX_EMPLOYEES];
	int numOfEmp;
public:
	void init();
	void insert(int, char f[], char l[], double);
	void search(int empID);
	void search(char lname[]);
	void print();
	void readIn(company&);
};
void company::init(){

}
void company::insert(int, char f[], char l[], double){

}
void company::search(int empID) {

}
void company::search(char lname[]) {

}
void company::print() {

}
void company::readIn(company& comp){
	char fname[NAME_SIZE], lname[NAME_SIZE];
	int id;
	double salary;
	comp.init(); // initialize the array to empty
	ifstream myfile ("prog9in.txt");
	if (myfile.is_open()){
		myfile >> id >> fname >> lname >> salary;
		while (!myfile.eof()){
			comp.insert(id, fname, lname, salary);
			myfile >> id >> fname >>lname >> salary;
		}
		myfile.close();
	}
	else cout << "Unable to open file";
}

int main(){
	company comp;
	ifstream fin;
	ofstream fout;
	
	char A[1];
	comp.readIn(comp);
	cout << "      Select your option:" << endl;
	cout << "   1. Search employee by last name" << endl;
	cout << "   2. Search employee by ID" << endl;
	cout << "   3. Print list of all employees" << endl;
	cout << "   4. Exit " << endl << endl;
	cout << "-> ";
	int choice;
	cin >> choice;
	switch (choice) {
		case 1: comp.search(A[1]); break;
		case 2: comp.search(choice); break;
		case 3: comp.print(); break;
		case 4: exit(EXIT_SUCCESS); break;
		default: cout << "Wrong input. Press enter to exit." << endl; cin.get(); break;
	}
	cin.get();

	return 0;
}



