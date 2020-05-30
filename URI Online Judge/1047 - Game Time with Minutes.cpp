// https://www.urionlinejudge.com.br/judge/en/problems/view/1047

#include <iostream>

using namespace std;

int main() {

    int initialHour, initialMinute, finalHour, finalMinute, min, max, diff;

    cin >> initialHour >> initialMinute >> finalHour >> finalMinute;

    min = (initialHour*60)+initialMinute;
    max = (finalHour*60)+finalMinute;

    diff = (max>min) ? max-min : ((min-max)-(24*60))*(-1);

    if(diff!=0){

        cout << "O JOGO DUROU " << diff/60 << " HORA(S) E " << diff%60  << " MINUTO(S)" << endl;
    }
    else{

        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
    }

    return 0;
}