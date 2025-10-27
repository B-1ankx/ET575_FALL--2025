#include <iostream>
#include <cmath>
using namespace std;

int speed(){
   
    int s;
    cout<<"Enter the wind speed: ";
    cin>>s;

    while (s <= 0 || s >= 100){
        cout<<"Invalid input.";
        cin>>s;
    }

    return s;
}

float temperature(){

    float temp;
    cout<<"Enter the temperature: ";
    cin>>temp;

    while (temp > 10 || temp <= -90){
        cout<<"Invalid input.";
        cin>>temp;
    }

    return temp;
}

float windspeed(int v, float temp){
    float windchill =  33 - (10 / v - v + 10.5) * (33 - temp);
    return windchill;
    
}

void prompt_result(float windchill){
    cout<<"The wind index is: "<<windchill<<endl;
}


