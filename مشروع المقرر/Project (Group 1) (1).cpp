#include <iostream>
#include <stdlib.h>
#include<time.h>
#include<conio.h>
using namespace std;

class ggame{
public :
	char  roc[30],pap[30] ,sci[30];
 ggame(){
	 std::string roc = "1)  Rock\n";
	 std::string pap = "2)  Paper\n";
	 std::string sci = "3)  Scissors\n";

	}
void dischoice()
 {
	 cout << roc;
     cout << pap;
     cout << sci;
}
};


void disCh(int choose,ggame g)
{

switch(choose){
    case 1 :
     cout << g.roc;
      break;
    case 2 :
      cout << g.pap;
      break;
    case 3 :
      std::cout << g.sci;
      break;
    default:
      std::cout << "Invalid Option\n";
}
}

void printResult(int result[])
{
	cout<< "the result is: \n you =  "<<result[0]<<"   your computer =  "<<result[1]<<"\n";
	if (result[0]>result[1])
		cout<< "you win! \n";
	else if (result[0]<result[1])
     cout<< "computer win! \n";
	else
      cout<< "Draw\n";
}

void menu()
{
cout << "====================\n";
cout << "rock paper scissors!\n";
cout << "Rules:\n";
cout << "1) Rock smashes scissors\n";
cout << "2) Scissors cuts paper\n";
cout << "3) Paper covers rock\n";
cout << "If you all have the same choice, a draw\n ";
cout << "Whoever gets the most points wins\n";
cout<< "1)  Rock\n";
cout<< "2) Paper\n";
cout<< "3) Scissors\n";
cout << "====================" << endl;
}

void win(int user,int computer, int result[])
{

   if((user == 1 && computer == 3) ||(user == 3 && computer == 2)||(user == 2 && computer == 1))
 {
    std::cout << "\nYou Win(^__^)\nCongrats!\n";
	++result[0];
  }

  else if ((user == 1 && computer == 2) || (user == 2 && computer == 3) || (user == 3 && computer == 1))
 {
    std::cout << "\nComputer Wins!\nGAMEOVER XD\n";
	++result[1];
  }
  else  if ((user == 1 && computer == 1) || (user == 2 && computer == 2) || (user == 3 && computer == 3))
    std::cout << "Draw Game\n";
}

int chackOption (int again)
{
	while(again != 1 && again != 2){

std::cout << "Invalid Option\n";
std::cout << "1) Yes\n";
std::cout << "2) NO\n";
std::cin >> again;

}
	return again;
}
int main() {

int again =1;
int result[2]={0,0};
while(again){


srand (time(NULL));
int computer = rand() % 3 + 1;
int user = 0;

  //Creating strings to avoid repetition
ggame g;
menu();

//Displaying choices
cout << "Choose: ";
cin >> user;
cout << "\nYou choose: " << user << endl;

  //Displaying user choice


  //Displaying computer choice
cout << "Computer choose: " << disCh << endl ;
disCh(computer ,g);



  //Win Lose Draw Logic
 win(user,computer,result);

printResult(result);
std::cout << "Do you want play again?\n";
std::cout << "1) Yes\n";
std::cout << "2) NO\n";
std::cin >> again;

again=chackOption(again);
if(again == 2){
  again = 0;
  printResult(result);
  cout<<"good bye!, see you later..";

}


}

  getch();
}
