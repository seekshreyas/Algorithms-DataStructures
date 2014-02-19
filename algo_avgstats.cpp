#include <iostream>
#include <stdlib.h>
#include <math.h>


using namespate std;
typedef int Number;

Number randNum(){ return rand(); }

int main(int argc, char *argv[]){
    int N = atoi(argv[1]);

    float m1, m2 = 0.0;

    for (int i=0; i<N; i++){
        Number x = randNum();

        m1 += ((float) x)/N; //average
        m2 += ((float) x*x)/N; //std dev.
    }

    cout << "Avg: \t" << m1 << endl;
    cout << "Std Dev.: \t" << sqrt(m2 - m1*m1) << endl;
}
