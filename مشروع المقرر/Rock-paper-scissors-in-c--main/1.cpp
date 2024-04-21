#include <iostream>
#include <stdlib.h>
using namespace std;
// https://repl.it/@abdulrahmanalm2/prohect#main.cpp
int main() {

int again =1; 
while(again){

srand (time(NULL));
int computer = rand() % 3 + 1;
int user = 0;
  
  //Creating strings to avoid repetition
  std::string roc = "1) ✌️ Rock\n";
  std::string pap = "2) ✋ Paper\n";
  std::string sci = "3) ✌️ Scissors\n";
  

std::cout << "====================\n";
std::cout << "rock paper scissors!\n";
std::cout << "Rules:\n";
std::cout << "Rock smashes scissors\n";
std::cout << "Scissors cuts paper\n";
std::cout << "Paper covers rock\n";
std::cout << "If you all have the same choice, a draw\n";
std::cout << "====================\n";

std::cout << roc;
std::cout << pap;
std::cout << sci;

std::cout << "Choose: ";
std::cin >> user;

  
std::cout << "\nYou  choose ";
  
  //Displaying user choice
  switch(user){
    case 1 :
      std::cout << roc;
      break;
    case 2 :
      std::cout << pap;
      break;
    case 3 :
      std::cout << sci;
      break;
    default:
      std::cout << "Invalid Option\n";
  }
  
  //Displaying computer choice
std::cout << "Computer choose ";
    switch(computer){
    case 1 :
      std::cout << roc;
      break;
    case 2 :
      std::cout << pap;
      break;
    case 3 :
      std::cout << sci;
      break;
    default :
      std::cout << "Invalid Option\n";
  }
  
  
  //Win Lose Draw Logic
  if(user == computer){
    std::cout << "Draw Game\n";
  }
  else if(user == 1 && computer == 3){
    std::cout << "You Win(^__^)\nCongrats!\n";
  }
  else if(user == 3 && computer == 2){
    std::cout << "You Win(^__^)\nCongrats!\n";
  }
  else if(user == 2 && computer == 1){
    std::cout << "You Win(^__^)\nCongrats!\n";
  }
  else{
    std::cout << "Computer Wins!\nGAMEOVER XD\n";
  }
  
std::cout << "Do you want play again?\n";
std::cout << "1) Yes\n";
std::cout << "2) NO\n";
std::cin >> again;

while(again != 1 && again != 2){

std::cout << "Invalid Option\n";
std::cout << "1) Yes\n";
std::cout << "2) NO\n";
std::cin >> again;
}


if(again == 2){
  again = 0;
   cout<<"good bye!, see you later😭";
}

}


}
