#include<iostream>
using namespace std;

int main(){
	char grade;
	int count[5] = {}; 
	int i=1;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student ["<<i<<"]: ";
		cin >> grade; 
		if(grade=='A'){
			count[0]+=1;
		}else if(grade=='B'){
			count[1]+=1;
		}else if(grade=='C'){
			count[2]+=1;
		} else if(grade=='D'){
			count[3]+=1;
		}else if(grade=='F'){
			count[4]+=1;
		}else if(grade=='0'){
			break;
		}else{
			cout<<"Wrong input. Please input again.\n";
			i--;
		}
i++;
		
		
	}while(grade!='0');
	
	
	cout << "In total " << i-1 << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] ;

	return 0;
}
