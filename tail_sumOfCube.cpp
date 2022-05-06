# include <iostream>
# include <cmath>

using namespace std;

// TAIL-RECURSION edition: 
// LAST CALL of n IS TAIL
// Implement function:
int tail_sumOfCube(int n, int acc){
    if (n <= 1){
        return acc;
    }
    
    return acc + tail_sumOfCube(n - 1, pow(n, 3));
}

// call first (base) case
int sumOfCube (int n){
    return tail_sumOfCube(n, 1);
}


// Main loop:
int main (){
    for (int n = 1; n <= 20; n++){
        cout << "f(" << n;
        cout << ") = " << sumOfCube(n) << endl;
    }
}