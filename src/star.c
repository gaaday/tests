#include<iostream>

using namespace std;

int main(int argc,char** argv) {
    int len = 4;
    int space = len;
    for(int i = 0; i <= len;i++) {
        for(int j = 0;j<=space;j++)
            cout << " ";
        for(int k = 1;k<=i;k++)
            cout << "* ";
        cout << endl;
        space--;
    }
    space = 0;
    for(int i=len-1; i>=0;i--) {
        for(int j = 0;j<space;j++)
            cout << " ";

        for(int k = i; k >=0;k--)
            cout << " *";
        
        space++;
        cout << endl;

    }

    return 0;

}
