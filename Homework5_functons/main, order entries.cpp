#include <iostream>
using namespace std;
#include "function, order entries.cpp"


int main(){
    int num1 = CollectNumbers();
    int num2 = CollectNumbers();
    int num3 = CollectNumbers();
    bool desc_order = inOrder(num1, num2, num3);
   runProgram(num1, num2, num3, desc_order);

    return 0;
}
