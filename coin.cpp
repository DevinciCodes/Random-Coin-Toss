//preprocessor directives
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));// Seed the random number generator with current time
    
    int repeat_heads = 0;
    int total_flips = 0;

    while(repeat_heads < 3){
        int result = rand() % 2; // Generate random number (0 or 1)

        if (result == 0){
            cout<< "Head" <<endl;
            repeat_heads++; //increment the variable by 1
        } else{
            cout<< "Tail" <<endl;
            repeat_heads = 0; //reset back to 0
        }

        total_flips++;    
    }
    cout<< "It took " << total_flips << " flips to get 3 consectutive heads"<<endl;
    return 0; //exit program

}