#include <iostream>
#include <vector>
using namespace std;
// vector<datatype> vector name {}
void print(const vector<int>& v);
void rotateright( vector<int>& v, int k);
void rotateleft(vector<int>& v, int k);

int main(void){

    vector<int> v {1,2,3,4,5,6,7};
    
    print(v);
    cout << v.size() << endl; // size of vector

    v.pop_back(); // removes last element
    print(v);

    v.insert(v.begin(), 100); // begin points to the start of the vector, insert places a number in the place chosen; .end() points to the end of the vector
    print(v);

    // insert 999 in the middle of the vector
    int middle = v.size()/2;
    v.insert(v.begin()+ middle, 999); // points to begining + middle and puts 999 there
    print (v);

    v.erase(v.begin()+1); //removes the second element
    print(v);

    rotateright(v, 1);

    return 0;
}

void print(const vector<int>& v){

    for (int i : v){
        cout << i << ' ';
    }
    cout << endl;
}

void rotateright(vector<int>& v, int k){
    for (int i = 1; i <= k; i++){
        v.insert(v.begin(), v.back());
        v.erase(v.end());
    }
    print(v);


}

void rotateleft(vector<int>& v, int k){
    for (int i = 1; i <=k; i++){
        v.insert(v.end(),v[1]);
        v.erase(v.front());
    }
}