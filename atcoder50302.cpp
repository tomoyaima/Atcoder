#include<iostream>
#include<string>
#include <sstream>
#include <stdio.h>
#include <math.h>
 
using namespace std;
 
int main() {
    string t; 
    cin >> t; 
   
    for(double i=0;i < t.size();i+=1){
 
        if(t[i]=='?'){
           
      
                 t[i]='D';
            
        }
    }
   

    cout << t << endl;
}
