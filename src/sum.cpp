//Author:::A
///Change in branch1
#include <iostream>
#include <string> 

using namespace std;


bool sum(long long inp) {
    long long i = inp;
    long long s = 0;
    if (i % 3 == 0 && i / 10  == 0)
        return true;
    while(i > 0) {
        s += i % 10;
        i = i / 10;
     }

     if(s % 3 == 0)
        return sum(s) & true;
     else
        return false;

  
          
}


int main(int argc, char** argv) {

    long long input;
    cout << "Enter an integer:";
    cin >> input;
    if (input < 0) {
        cout << "Enter a positive number!\n";
        return 1;
    }
        

    if(sum(input)) {
        cout << input << " IS divisible by 3\n";
    } else {
        cout << input << " IS NOT divisible by 3\n";
    }

    return 0;


}
