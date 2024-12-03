#include <iostream>
#include <cstdlib>

using namespace std;
int main(){
    
    string name;
    int inputuser;
    char input;
    cout<<"Enter your name: "<<endl;
    cin>>name;
    cout<<endl;
    do
    {
        srand(0);
        int variable = rand()%5+1;
        cout<<"Enter any number in between range 1 to 5: "<<endl;
        cin>>inputuser;
        if(inputuser==variable){
            cout<<"Congratulation! You guessed the correct number."<<endl;

        }
        else{
            cout<<"Sorry, You guessed wrong number Try again"<<endl;
        }
        cout <<"Would you like to try again Y/N"<<endl;
        cin>>input;
        cout<<endl;
    } while (input != 'N');
    cout<<"Game End ";
    return 0;

}