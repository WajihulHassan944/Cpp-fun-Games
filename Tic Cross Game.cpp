#include<iostream>
#include<string>
using namespace std;
int row,column;
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char turn='X';
bool draw=false;
void board_display(){
    system("cls");
    
	cout<<endl<<endl<<endl<<"                                          Dedicated  To  My  Friend!!";	
	cout<<"\n\n\t\t\t\t\t       TICK  CROSS  GAME";
	cout<<endl;
	cout<<"\n\t\t\t\t\t\t Player1 : [X]\n\t\t\t\t\t\t Player2 : [Y]";
	cout<<endl<<endl;
	cout<<"\n\t\t\t\t\t            |     |     \n";
	cout<<"\t\t\t\t\t         "<<board[0][0]<<"  |  "<<board[0][1]<<"  |  "<<board[0][2]<<"  \n";
	cout<<"\t\t\t\t\t       _____|_____|_____\n";
	cout<<"\t\t\t\t\t            |     |     \n";
	cout<<"\t\t\t\t\t         "<<board[1][0]<<"  |  "<<board[1][1]<<"  |  "<<board[1][2]<<"  \n";
	cout<<"\t\t\t\t\t        ____|_____|_____\n";
	cout<<"\t\t\t\t\t            |     |     \n";
	cout<<"\t\t\t\t\t         "<<board[2][0]<<"  |  "<<board[2][1]<<"  |  "<<board[2][2]<<"  \n";
	cout<<"\t\t\t\t\t            |     |     \n";
}

void player_turn(){
	int choice;
	
	if(turn=='X')
	cout<<"\n\n\t\t\t\t\t     Player1  [X]  Turn: ";
	
	if(turn=='Y')
	cout<<"\n\n\t\t\t\t\t     Player2  [Y]  Turn: ";
	
	
	cin>>choice;
	switch(choice){
	case 1: row=0;column=0;break;	
	case 2: row=0;column=1;break;
	case 3: row=0;column=2;break;
	case 4: row=1;column=0;break;
	case 5: row=1;column=1;break;
	case 6: row=1;column=2;break;
	case 7: row=2;column=0;break;
	case 8: row=2;column=1;break;
	case 9: row=2;column=2;break;
	default:
		cout<<"Invalid choice";
		break;
}
if(turn=='X' && board[row][column]!='X' && board[row][column]!='Y'){
	board[row][column]='X';
	turn='Y';
}else if(turn=='Y'  && board[row][column]!='X' && board[row][column]!='Y'){
	board[row][column]='Y';
	turn='X';
    }
else{
	cout<<"Box-already Filled!\nPlease Try Again.";
	player_turn();
}
	board_display();
}
bool game_over(){
	for(int i=0;i<3;i++)
	if(board[i][0]==board[i][1] &&  board[i][0]==board[i][2]
	|| board[0][i]==board[1][i] &&  board[0][i]==board[2][i])
	return false;
	
	if(board[0][0]==board[1][1] && board[0][0]==board[2][2]   ||
	board[0][2]==board[1][1] && board[0][0]==board[2][0]	)
	return false;
	
	for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
	if(board[i][j]!='X' && board[i][j]!='Y' )
	return true;}}
	
	
	draw=true;
	return false;
}

int main(){
	

    while(game_over()){
	board_display();
	player_turn();
	game_over();
}
if(turn=='X' && draw==false)
cout<<"\n\n\t\t\t\t     Player2 [Y] Wins!! Congratulations\n";
else if(turn=='Y' && draw==false)
cout<<"\n\n\t\t\t\t     Player1 [X] Wins!! Congratulations\n";
else{
cout<<"\n\n\t\t\t\t     GAME DRAW!! \n";
}

}



