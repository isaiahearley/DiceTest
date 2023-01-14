#include <iostream>
#include <cmath>
using namespace std; 

void enter(){
    cout << "Press ENTER to continue...";
    cin.get();
}



int main (){

//call dice function idk
 
for(int i = 20; i > 0; i--){
    srand(time(NULL));

    int rolldice1 = rand() % 6 + 1;
    int rolldice2 = rand() % 6 + 1;

    cout << "You rolled a " << rolldice1;
    cout << " and a " << rolldice2 << "!\n";

    if(rolldice1 == rolldice2){
        cout << "this is also a double lucky you!\n";
    }

    enter(); 


}


system("pause");
return 0;
}