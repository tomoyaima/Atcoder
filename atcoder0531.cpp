#include<iostream>
#include<string>
#include <sstream>
#include <stdio.h>
#include <math.h>
 
using namespace std;
 
int main() {
    int n;
    
    cin >> n;
    long long int a[n];
    long long int sum=0;
    for(int i=0;i<n;i++){ 
    cin >> a[i];
    }
   
   sum = a[0];
 for(int i=1;i<n;i++){ 
    sum *= a[i];
 }
    if(sum > powl(10,18)){
        cout << -1 <<endl;
       
    }else{
    cout << sum << endl;
    }
} 