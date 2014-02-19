// program 3.5
// Sieve of Eratosthenes
// print all prime numbers less than a constant.

#include <iostream>
using namespace std;


static const int N = 32;

int main(){
    int i, a[N];

    // for numbers are non prime
    for (i=2; i<N; i++){
        a[i] = 1;
    } 

    // find numbers that are multiple of previous numbers
    for (i = 2; i < N; i++){
        if(a[i]){
            for (int j=i; j*i < N; j++){
                a[i*j] = 0;
            }
        }

    }

    for (i = 2; i<N; i++){
        if(a[i]){
            cout << " " << i << endl;
        }
    }
}
