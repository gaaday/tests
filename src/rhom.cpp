#include<iostream>

using namespace std;

int main(int argc, char **argv) {
    int l;
    cout << "Enter a number:";
    cin >> l;
    if ( l > 9 ) {
        cout << "Please enter a single digit!\n";
        return 1;
    }    
    
    if( l % 2 == 0) {
        cout << "Please enter an odd number!\n";
        return 1;
    }
    int s = l/2;        
    for(int i = 1; i <= l ; i+=2) {
        for(int j = 0; j < s; j++)
            cout << " ";
        for(int k = 1; k <= i; k++)
            cout << l;
        cout << "\n";
        s--;
    }
    s = 1;
    for(int i = l - 2; i >= 1; i-=2){
        for(int j = 0; j < s; j++)
            cout << " ";

        for(int k = 1; k <= i; k++)
            cout << l;
    
        cout << "\n";

        s++;

    }    
    return 0;
}

