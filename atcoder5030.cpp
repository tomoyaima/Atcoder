#include<iostream>
#include<string>
#include <sstream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
    double a,b,c,d,e;

    cin >> a >> b>> c >> d >> e; 

    double hour,minute,diff;
    hour= c-a;
    minute = d-b;
    diff = hour*60+minute-e;
    cout << diff << endl;
    
}