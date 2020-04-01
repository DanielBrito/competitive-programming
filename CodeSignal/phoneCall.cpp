// https://app.codesignal.com/arcade/code-arcade/intro-gates/mZAucMXhNMmT7JWta

#include<iostream>

using namespace std;

int phoneCall(int min1, int min2_10, int min11, int s){

    // Variable to store how many minutes I spent on the phone call:
    int duration = 0;

    // Checking if I have enough money to pay at least for the first minute:
    if(s<min1){

        return 0;
    }

    // I talked for one minute and spent 'min1' cents:
    ++duration;
    s -= min1;

    // Checking if I have enough money to pay for the second to tenth minute:
    for(int i=0; i<9 && s>=min2_10; i++){

        // I talked for one more minute and spent 'min2_10' cents:
        ++duration;
        s -= min2_10;

        // After the tenth minute, I check how many minutes I still can talk:
        if(i==8 && s>=min11){
            duration += (s/min11);
        }
    }

    return duration;
}

int main(){

    int min1, min2, min11, s;

    cin >> min1 >> min2 >> min11 >> s;

    cout << phoneCall(min1, min2, min11, s) << endl;

    return 0;
}