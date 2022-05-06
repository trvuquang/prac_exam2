# include <iostream>
# include <cmath>

using namespace std;

// NON TAIL-RECURSION edition:
// Implement function:
int sumOfCube(int n){
    if (n <= 1){
        return 1;
    }
        
    else{
        return (pow(n, 3) + sumOfCube(n-1));
    }
}


// Main loop:

int main (){
    for (int n = 1; n <= 20; n++){
        cout << "f(" << n;
        cout << ") = " << sumOfCube(n) << endl;
    }
}