#include<iostream>
#include<string>
#include <sstream>
#include <stdio.h>
#include <math.h>
using namespace std;

class Radix {
private:
  const char* s;
  int a[128];
public:
  Radix(const char* s = "0123456789ABCDEF") : s(s) {
    int i;
    for(i = 0; s[i]; ++i)
      a[(int)s[i]] = i;
  }
  string to(long long p, int q) {
    int i;
    if(!p)
      return "0";
    char t[64] = { };
    for(i = 62; p; --i) {
      t[i] = s[p % q];
      p /= q;
    }
    return string(t + i + 1);
  }
  string to(const string& t, int p, int q) {
    return to(to(t, p), q);
  }
  long long to(const string& t, int p) {
    int i;
    long long sm = a[(int)t[0]];
    for(i = 1; i < (int)t.length(); ++i)
      sm = sm * p + a[(int)t[i]];
    return sm;
  }
};

int main() {
  int a;
  int c;
  string b;
  cin >> a;
  cin >> b;
  string d[100000];
   Radix r;
   for(int i=0;i< pow(3,a);i++){
       d[i] = r.to(i, 3);
   }
  
  for(int k=0;i<b.sise();k++){
      if(b[k]=="S"){
        for(int i=0;i< d.size();i++){
             for(int j=0;j< d[i].size();j++){
                if(d[i][j]=="1"){
                d[i][j]="2";
                }else if(c[i][j]=="2"){
                    c[i][j]="1";
               }
            }
        }

      }else if(b[k]=="R"){
        for(int i=0;i< c.size()-1;i++){
            c[i+1]=i;
        }
      }
  }
}