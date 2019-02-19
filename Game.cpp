#include <iostream>
#include <ctime>
using namespace std;
int cash = 100;
string name;
int PlayGame(int bet)
{
  char *C = new char[3];
  C[0] = 'J';
  C[1] = 'Q';
  C[2] = 'K';
  srand(time(NULL));
  int i;
  for(i=0;i<5;i++)
  {
    int x = rand() % 3;
    int y = rand() % 3;
    int temp = C[x];
    C[x] = C[y];
    C[y] = temp;
  }
  int PlayerGuess;
  cout<<"What's the potion of Queen - 1, 2 or 3 ? ";
  cin>>PlayerGuess;
  if(C[PlayerGuess-1]=='Q')
  {
    cash+=3*bet;
    cout<<"You Win!"<<name<<"  Result = "<<C[0]<<" "<<C[1]<<" "<<C[2]<<" cash = $"<<cash<<endl;
  }
  else
  {
    cash-=bet;
    cout<<"You loose!"<<name<<" Result = "<<C[0]<<" "<<C[1]<<" "<<C[2]<<" cash = $"<<cash<<endl;
  }
}
int main()
{
  int bet;
  cout<<"Welcome to Virtual casino..."<<endl;
  int y;
  for(int i=0;i<5;i++){
  cout<<endl<<"What's your bet ? $";
  cin>>bet;
  if( bet==0||bet>cash)break;
  PlayGame(bet);}
  cout<<"End game.................Thanks for play this game.";
  return 0;
}
