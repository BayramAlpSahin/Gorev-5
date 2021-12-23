#include <bits/stdc++.h>
#include <fstream>
#include <sstream>



using namespace std;

int main() {    
    fstream A("A.txt");
    fstream b("b.txt");
    string s;
    int n=0,m;
    vector <int> b_v;
    while(getline(b,s)){
        n++;
        stringstream num(s);
        num>>m;
        b_v.push_back(m);}
    for(int i=0;i<b_v.size();i++){
        cout<<b_v[i]<<endl;}
    int x=0;
    int A_v[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (j<n-1){
                getline(A,s,' ');}
            if (j==n-1){
                getline(A,s);}
            stringstream num(s);
            num>>m;
            A_v[i][j]=m;
    }}
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<A_v[i][j]<<" ";}
        cout<<endl;
    }
    

    
      
    return 0;
}
