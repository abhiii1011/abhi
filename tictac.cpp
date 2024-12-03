#include <iostream>
#include <string>
using namespace std;
char space [3][3] = {{'1','2', '3'}, {'4', '5', '6'},{'7', '8', '9'}};
int row;
int column;
char token = 'x';
bool tie= false;
string p1;
string p2;

void functionOne(){

cout << "     |    |"<<endl;
cout <<" "<<space[0][0]<<"   | "<<space[0][1]<<"  | "<<space[0][2]<<"   "<<endl;
cout << " ____|____|____"<<endl;
cout << "     |    |"<<endl;
cout <<" "<<space[1][0]<<"   | "<<space[1][1]<<"  | "<<space[1][2]<<"   "<<endl;

cout << " ____|____|____"<<endl;
cout << "     |    |"<<endl;
cout <<" "<<space[2][0]<<"   | "<<space[2][1]<<"  | "<<space[2][2]<<"    "<<endl;
cout << "     |    |"<<endl;



}
void initializeGame(){
    cout<<"Enter the name of the first player: "<<endl;
cin>>p1;
cout<<"Enter the name of the Second  player: "<<endl;
cin>>p2;

cout<<p1<<"Is the player1 so he/she will play first: "<<endl;
cout<<p2<<"Is the player2 so he/she will play second:  "<<endl;
functionOne();
}

void functionTwo(){
int digit ;
if (token=='x'){
    cout<<p1<<" Please enter the position(1-9): ";
   
}
else {
   cout<<p2<<" Please enter the position(1-9): ";   
}
   cin>>digit;


if(digit==1){
    row    = 0;
    column = 0;
}
if(digit==2){
    row    = 0;
    column = 1;
}
if(digit==3){
    row    = 0;
    column = 2;

}
if(digit==4){
    row    = 1;
    column = 0;
}
if(digit==5){
    row    = 1;
    column = 1;
}
if(digit==6){
    row    = 1;
    column = 2;
}
if(digit==7){
    row    = 2;
    column = 0;
}
if(digit==8){
    row    = 2;
    column = 1;
}
if(digit==9){
    row    = 2;
    column = 2;
}
else if(digit<1 || digit>9){
    cout<<"Invalid!!!"<<endl;
}
if (token=='x' && space[row][column] != 'x' && space[row][column]!='O')
{
   space[row][column]= 'x'; 
   token= 'O';
}
else if (token=='O' && space[row][column] != 'x' && space[row][column]!='O')
{
       space[row][column]= 'O'; 
   token= 'x';
}
else{
    cout<<"There is no empty  place"<<endl;
    functionTwo();
}
functionOne();


}
bool functionThree(){

   for ( int i = 0; i<3; i++){
    if (space[i][0]==space[i][1] && space[i][0]==space[i][2] || space[0][i]==space[1][i] && space[0][i]==space[2][i] )
    {
        return true;
    }
     if (space[0][0]==space[1][1] && space[1][1]==space[2][2] || space[0][2]==space[1][1] && space[1][1]==space[2][0] )
    {
        return true;
    }

for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++){
    if(space[i][j] != 'x'&& space[i][j] !='o'){
        return false;
    }
}

}

   } 

   tie=true;
   return false;
}
 
 bool checkTie() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (space[i][j] != 'x' && space[i][j] != 'O') {
                return false; 
            }
        }
    }
    return true; 
}
int main() {
    initializeGame();
    while (true) {
        functionTwo();
        if (functionThree()) {
            if (token == 'x') {
                cout << p2 << " wins!!" << endl;
            } else {
                cout << p1 << " wins!!" << endl;
            }
            break;
        }
        if (checkTie()) {
            cout << "It's a draw!" << endl;
            break;
        }
    }
    return 0;
}