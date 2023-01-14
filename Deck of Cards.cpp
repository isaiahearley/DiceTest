#include <iostream>
#include <cmath>
#include <random>
using namespace std;

int main(){


    srand(time(NULL));
    // 4 suits 
    // 14 different numbers A123456789, 10 JQK 

    int suit = rand() % 4 + 1;
    int card = rand() % 14 + 1;
    int deck;
    int cardOne;
    int cardTwo;
    int chance;
    double probability;
    double finalAnswer;


for(int i = 2; i > 0; i--){
    
    int suit = rand() % 4 + 1;
    int card = rand() % 14 + 1;

    //card draw turn
    if (i == 2){
    cout << "1st Draw\n"
         << "--------\n";
    } else if (i == 1){
    cout << "2nd Draw\n"
         << "--------\n";
    }

    // random card 1-14
    if (card <= 10 && card){
        cout << card << " of ";
    } else if (card == 11){
        cout << card << " Ace of ";
    } else if (card == 12){
        card = card - 2;
        cout << card << " Jack of ";
    } else if (card == 13){
        card = card - 3;
        cout << card << " Queen of ";
    } else if (card == 14){
        card = card - 4;
        cout << card << " King of ";
    }

    // random suit
    if (suit == 1){
        cout << "Spades\n\n";
    } else if (suit == 2){
        cout << "Hearts\n\n";
    } else if (suit == 3){
       cout << "Clubs\n\n";
    } else if (suit == 4){
        cout << "Diamonds\n\n";
    }


    if(i == 2){
        cardOne = cardOne + card;
    } else if (i == 1){
        cardTwo = cardTwo + card; 
    }

}



    //probability calculator reverse calculations?
    cout << "The chance of drawing a " << cardOne << " and a " << cardTwo << " is: \n";
    chance = cardOne * cardTwo;
    probability = 52 * 51 / 2;
    probability = chance / probability;
    probability = probability * 100;
    finalAnswer = ceil(probability * 100.0) / 100;
    cout << finalAnswer << "%"; 
   



}