#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<bits/stdc++.h>

using namespace std;

void init_deck(int deck[]);
void shuffle_cards(int deck[]);
int main()
{  
    srand(time(NULL));
    int deck[52];
    init_deck(deck);
    shuffle_cards(deck);
    int player1=0,player2=0;
    cout<<"player1\n";
    for(int i=0;i<5;i++)
    {
        cout<<deck[i]<<endl;
        if(deck[i]%100==11||deck[i]%100==12||deck[i]%100==13)
        {
            player1++;
        }
    }
    cout<<"player2\n";
    for(int i=5;i<10;i++)
    {
        cout<<player2<<endl;
        if(deck[i]%100==11||deck[i]%100==12||deck[i]%100==13)
        {
            player2++;
        }
    }
    if(player1>player2)
    {
        printf("player1 wins");
    }
    if (player2>player1)
    {
        printf("player1 wins");
    }
    




}

void init_deck(int deck[])
{
    for(int i=0;i<52;i++)
    {
        for(int k=1;k<=4;k++)
        {
            for(int b=1;b<=13;b++)
            {
                deck[i]=100*k+b;
            }
        }
    }
}
void shuffle_cards(int deck[])
{
    for(int i=0;i<52;i++)
    {   int j;
        while(1)
        {
            j= rand()%52;
            if(j!=i)
            {   int clone=deck[i];
                deck[i]=deck[j];
                deck[j]=clone;
                break;
            }
        }
    }
}
