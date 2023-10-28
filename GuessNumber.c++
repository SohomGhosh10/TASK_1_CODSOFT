// Task 1
// Number Guessing Game

#include<iostream>
using namespace std;
#include<time.h>

int main(){
    int n , guess , choice = 1;
    srand(time(0)); // Generates random number
    n = rand()%100 + 1;
    do{
        cout << "Guess any number between 1 and 100" << endl;
        cin >> guess; // Input

        // Condition if guess is lower
        if (guess > n){
            cout << "Lower number please!" << endl;
            cout << "Try once more!!" << endl;
        }

        // Condition if guess is higher    
        else if(guess < n){
            cout << "Higher number please!" << endl;
            cout << "Try once again!!" << endl; 
        }
        
        else{
            printf("You guessed it in %d attempts\n", choice);
        }
        choice++;
        
    }
    while(guess != n);

    return 0;

}