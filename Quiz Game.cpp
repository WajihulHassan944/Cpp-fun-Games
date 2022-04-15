#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	string questions[5]={
	"Which of the following is Tricontinental Country?",
	"Famous fast food restaurant company Burger King belongs to which Country?",
	"Office Of Strategic Services (OSS) was old name of which intelligent agency?",
	"The first person to draw the map of Earth?",
	"Who laid  first step on the Moon?"
	};
	string options[5][4]={
	{"chad","chile","mali","swaziland"},
	{"America","England","Turkey","None of these"},
	{"MI6","CIA","ISI","N.O.T"},
	{"Hiraclitus","Pythagoras","Anaximander","Thales"},
	{"LMP Edgar","CMP Stuart","Neil Armstrong","None of these"}
	};
	string correctOptions[5]={
	"Chile","America","CIA","Anaximander","Neil Armstrong"};
	
	int userOptions[5]={0,0,0,0,0};
	int totalQs=5;

	
	cout<<"\t\t\t\t-----------------------------------"<<endl;
	cout<<"\t\t\t\t|      Dedicated To My Friend      |"<<endl;
	cout<<"\t\t\t\t-----------------------------------"<<endl<<endl;
	
	
	cout<<"\t\t\t\t-----------------------------------"<<endl;
	cout<<"\t\t\t\t|             Cpp Quiz             |"<<endl;
	cout<<"\t\t\t\t-----------------------------------"<<endl<<endl;
	
	
	//-------Conducting Quiz-------
	for(int i=0;i<totalQs;i++){
		cout<<"Question # "<<(i+1)<<endl;
		cout<<questions[i]<<endl;
		cout<<"1. "<<options[i][0]<<endl;
		cout<<"2. "<<options[i][1]<<endl;
		cout<<"3. "<<options[i][2]<<endl;
		cout<<"4. "<<options[i][3]<<endl<<endl;
		
		
		cout<<"Select option (1-4) or 0 to skip and press Enter: ";
		cin>>userOptions[i];
		cout<<endl<<"------------------------------------------"<<endl<<endl;
	}
	
	//printing correct options
	cout<<"\t\t\t\t-----------------------------------"<<endl;
	cout<<"\t\t\t\t|         Correct Options         |"<<endl;
	cout<<"\t\t\t\t-----------------------------------"<<endl;
	
	for(int i=0;i<totalQs;i++){
		cout<<"Question # "<<(i+1)<<endl;
		cout<<questions[i]<<endl;
		cout<<"1. "<<options[i][0]<<endl;
		cout<<"2. "<<options[i][1]<<endl;
		cout<<"3. "<<options[i][2]<<endl;
		cout<<"4. "<<options[i][3]<<endl<<endl;
	if(userOptions[i]==0){
		cout<<"You skipped this Question."<<endl;
	}else{
		cout<<"You selected: "<<options[i][userOptions[i]-1]<<endl;
	}
	cout<<"Correct Option: "<<correctOptions[i]<<endl<<endl;
	
	cout<<"Press Any Key Except Enter to Continue . . . "<<endl;
	getch();
	cout<<endl<<"-----------------------"<<endl;
}

	// Printing Result
	cout<<endl<<endl;
	cout<<"\t\t\t\t-----------------------------------"<<endl;
	cout<<"\t\t\t\t|             Result               |"<<endl;
	cout<<"\t\t\t\t-----------------------------------"<<endl;
	
	int correct=0;
	int incorrect=0;
	int skipped=0;
	
	for(int i=0;i<totalQs;i++){
    	if(userOptions[i]!=0){
    		if(correctOptions[i]==options[i][userOptions[i]-1] ){
    			correct++;
			}else{
				incorrect++;
			}
		}else{
			skipped++;
		}
		}
	
		cout<<"Total Questions: "<<totalQs<<endl;
		cout<<"Correct: "<<correct<<endl;
		cout<<"Incorrect: "<<incorrect<<endl;
		cout<<"Skipped: "<<skipped<<endl;
	getch();
	return 0;
}

