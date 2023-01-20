
#include<iostream>

using namespace std;

enum day{mon,tue,wed,Thur,fri,Sat,sun};	

struct day{
	int year;
	int month;
	string jday;
};

class j_date {	
	private:
		int  month, year;
		string name;
		
	public:
		void getDate(){
            char temp;
	        cout << "Enter employee date of joining in (DD/MM/YYYY) format: ";
	        cin >> day >> temp >> month >> temp >>year;
        }
        
		switch(day){
			case '0':
			cout<< "MONDAY";
			break;
			case '1': 
			cout<<"Tuesday";
			break;
			case '2':
				cout<<"wednesday";
				break;
				case '3':
					cout<<"Thursady";
					break;
					case '4':
						cout<<"Friday";
						break;
						case '5':
							cout<<"Saturday";
							break;
							case '6':
								cout<<"Sunday";
								break;
								default{
								cout<<"Enter valid day";
									break;
								}
	
		}	;
        void showDate(){
            cout << "\nEmployee date of joining: ";
			cin >> day << "/" << month << "/" <<year;
        if(j_date.day==saturday|| j_date.day==sunday){
        
		}
		}






void employee::dispData(){
    cout << "Employee Number: " << emp_num << endl;
	cout << "Employee Compensation: $" << emp_comp <<endl;
    date1.showDate();
    cout << endl;
    switch(emp){
        case laborer:
            cout << "Employee type is laborer";
            break;
        case secretary:
            cout << "Employee type is secretary";
            break;
        case manager:
            cout << "Employee type is manager";
            break;
        case accountant:
            cout << "Employee type is accountant";
            break;
        case executive:
            cout << "Employee type is executive";
            break;
        case researcher:
            cout << "Employee type is researcher";
            break;
        default:
            cout << "Invalid input";
            break;
    }
    cout << endl;
}

int main(){
    employee emp1, emp2, emp3;
	cout <<"\nEnter first employee details: \n";
	emp1.setData();	
	cout <<"\nEnter second employee details: \n";
	emp2.setData();	
	cout <<"\nEnter third employee details: \n";
	emp3.setData();	

	cout <<"\nFirst employee deatils: ";
	emp1.dispData();
	cout <<"\nSecond employee deatils: ";
	emp2.dispData();
	cout <<"\nThird employee deatils: ";
	emp3.dispData();
    
	return 0;
}
