#include<bits/stdc++.h>
using namespace std;
int main()
{
    int start = 1;
    do{
    int r;
    cout<<"Welcome to this game of STONE, PAPER and SCISSORS"<<endl;
    cout<<"Enter the number of rounds you intend to play"<<endl;
    cin>>r;

    string yourMove,compMove;
    int n;
    int you = 0, comp = 0;

    for(int i=1; i<=r; i++)
    {
        cout<<"enter S or s for stone"<<endl;
        cout<<"enter P or p for paper"<<endl;
        cout<<"enter C or c for scissors"<<endl;
        cin>>yourMove;

        srand(time(0));
        n = rand() % 3;
        if(n==0)
        compMove = "s";
        if(n==1)
        compMove = "p";
        if(n==2)
        compMove = "c";

        if((yourMove == "s" || yourMove == "S") && compMove == "s")
        {
            cout<<"TIED! computer also chose stone"<<endl;
        }
        if((yourMove == "s" || yourMove == "S") && compMove == "p")
        {
            comp++;
            cout<<"You LOST! computer chose paper"<<endl;
        }
        if((yourMove == "s" || yourMove == "S") && compMove == "c")
        {
            you++;
            cout<<"You WON! computer chose scissors"<<endl;
        }
        if((yourMove == "p" || yourMove == "P") && compMove == "s")
        {
            you++;
            cout<<"You WON! computer chose stone"<<endl;
        }
        if((yourMove == "p" || yourMove == "P") && compMove == "p")
        {
            cout<<"TIED! computer also chose paper"<<endl;
        }
        if((yourMove == "p" || yourMove == "P") && compMove == "c")
        {
            comp++;
            cout<<"You LOST! computer chose scissors"<<endl;
        }
        if((yourMove == "c" || yourMove == "C") && compMove == "s")
        {
            comp++;
            cout<<"You LOST! computer chose stone"<<endl;
        }
        if((yourMove == "c" || yourMove == "C") && compMove == "p")
        {
            you++;
            cout<<"You WON! computer chose paper"<<endl;
        }
        if((yourMove == "c" || yourMove == "C") && compMove == "c")
        {
            cout<<"TIED! computer also chose scissors"<<endl;
        }
    }

    if(you > comp)
    {
        cout<<"CONGRATULATIONS! You won the game..."<<endl;
        cout<<"You scored = "<<you<<endl;
        cout<<"Computer scored = "<<comp<<endl;
    }
    if(you < comp)
    {   cout<<"ALAS! You lost the game..."<<endl;
        cout<<"You scored = "<<you<<endl;
        cout<<"Computer scored = "<<comp<<endl;
    }
    if(you == comp)
    {
        cout<<"Damn the game was tied with even scores!"<<endl;
        cout<<"You scored = "<<you<<endl;
        cout<<"Computer scored = "<<comp<<endl;
    }

    cout<<"Press 1 to play again and 0 to exit"<<endl;
    cin>>start;

    }while(start == 1);

    return 0;
}