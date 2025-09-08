#include <iostream>
#include <string>
using namespace std;
void printCombination(int n);
void printCombination(string& s, int n, int i);

int main (){
    int n;
    cout << "Enter n: ";
    cin >> n ;

    printCombination(n);



    return 0;
}

void printCombination(int n){
    // create a string and initialize with n 'a' characters
    string s(n, 'a');

    printCombination(s, n, 0);

}

void printCombination(string& s, int n, int i){
    // base case
    if (i >= n){
        cout << s << endl;
        return;
    
    }
    while(s[i] <= 'z'){

        printCombination(s, n, i + 1);
        s[i]++;
    }
    s[i] = 'a';
}// 3v 