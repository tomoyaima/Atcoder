#include<iostream>
#include<string>
#include <sstream>
#include <stdio.h>
#include <math.h>
 
using namespace std;
 
int main() {
    long int n;
    cin >> n; 
    int sosu[n];
    int yakusuu;
    int count=0;

    for(int i=1;i<n+1;i++){
        yakusuu=0;
        for(int j=1;j<i+1;j++){
            if(i%j==0)yakusuu++;
        }
        if(yakusuu == 2){
           
            sosu[count]=i;
           
            count++;
            
        }
    }
    cout<<count<<endl;
  
    int count1=0;
    int i=0;
    int paw=0;
    count =0;
    while(n!=1){
        if(n%sosu[i]==0){
            count1=0;
            paw = 1*pow(sosu[i],count1+1.0);
            do{
                n = n/paw; 
                count1+=1;   
                paw = 1*pow(sosu[i],count1+1.0);
        
            }while(n%paw==0);
        }
        count+=count1;
        count1=0;
        i++;
    }
    cout << count << endl;
} 