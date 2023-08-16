#include <iostream>
using namespace std;

class student{
	public:
		string name;
		string phone;
		string email;
		int level;
		double gpa;
		string index;
};
class List{
	public:
		string index;
		int level;
};

int main() {
	int option;
	student detail[10000];
	int total_student = 4;

	int level,gpa;
	string index,email;
	string name,phone;
	List attendance[10000];
	
	detail[0]={"Justice","0557196527","TA@uenr.edu",400,3.99,"UEB332909"};
	detail[1]={"ecodeLabs","0543210543","codes@uenr.edu",100,4.0,"UEB2303332"};
	detail[2]={"Dr. Appiahene","0123456789","Boss@uenr.edu",900,7.0},"UAB4245254";
	detail[3]={"Freshkid","9876543210","famboi@uenr.edu",100,2.9,"UAS1332442"};

	
	start:
	cout<<"\n------------------ UENR MANAGEMENT SYSTEM ---------------------"
	    "\n---------------------------------------------------------------\n"
	    "\n1. Check Total student"
	    "\n2. Make attendance"
	    "\n3. View all Profile"
	    "\n4. Add new student"
		"\n5. Quit       Select : ";
	    cin>>option;
	    
	    if(option==1){
	     
	    		cout<<"The total number of student are : "<<total_student<<"\n\n\n"
				"Do yo want to see their profile??"
				"\n\n\n 1. Yes \n2. No \n     Select : ";
				cin>>option;
				if(option ==1){
					goto profiles;
				}else if(option == 2){
					goto start;
				}else{
					cout<<"You made a typo!!!";
					
				}
	    		
	    	}else if(option==2){
	    	
	    	
	    		option =0;
	    		cout<<"--------------ATTENDANCE--------------\n";
				while(option!=2){
					int count;
					attend:
					cout<<"Index : ";
					cin>>index;
					cout<<"Level [100 - 400]:";
					cin>>level;
					attendance[count].index=index;
					attendance[count].level=level;
					
					cout<<"Is time up??\n 1. Yes\n2. No\n    select : ";
					cin>>option;
					if(option==1){
						cout<<"   INDEX    ------   LEVEL\n\n";
						for(int i=0;i<=count;i++){
							
							cout<<attendance[i].index<<"    "<<attendance[i].level;
						
						}break;
					}else{
					goto attend;
					}
					count++;
				}	
	    }else if(option==3){
	    	
	    	
	    		system("cls");
	    		profiles:
	    			cout<<"Name           Mail        Phone      GPA     Index     Level"<<endl;
	    			
	    		for(int i=0;i<=total_student;i++){
	    			cout<<detail[i].name<<"    "<<detail[i].email<<"    "<<detail[i].phone<<"    "<<detail[i].gpa<<"    "<<detail[i].index<<"    "<<detail[i].level<<endl;
	    			
				}	
				
				cout<<"\n\n------------------------------ecodeLabs-------------------------------\n\n";
						goto start;
	    }else if(option==4){
	    	
	    		system("cls");
	    		cout<<"\n\n-------------------- ADD FRESHERS ----------------------\n\n";
	    		
	    		cout<<"Enter First name : ";
	    		cin>>name;
	    		cout<<"Enter index : ";
	    		cin>>index;
	    		cout<<"Enter phone : ";
	    		cin>>phone;
				cout<<"Enter email : ";
	    		cin>>email;
	    		level =100;
	    		gpa = 0.0;
	    		total_student+=1;
	    		detail[total_student-1].name=name;
	    		detail[total_student-1].index=index;
	    		detail[total_student-1].phone=phone;
	    		detail[total_student-1].email=email;
	    		detail[total_student-1].level=level;
	    		detail[total_student-1].gpa=gpa;
	    			system("cls");
	    			int i = total_student-1;
	    		cout<<"------------ student added --------\n\a";
	    		cout<<detail[i].name<<"  "<<detail[i].email<<" "<<detail[i].phone<<detail[i].gpa<<" "<<detail[i].index<<endl;
	    			goto start;
	    	}else if(option==5){
	    	
	    		system("cls");
	    		cout<<"\n\n\n\n\n ---------------------- QUIT ------------------------\a"
	    		
	    		"\necodeLabs----------5-----1-----7---------";
	    		return 0;
	    	
			}else{
				system("cls");
				cout<<"Invalid option\a\a\a";
				goto start;
			}
	      	    
	
	   	    
		return 0;
}
