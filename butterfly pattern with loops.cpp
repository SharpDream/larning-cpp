#include <iostream>
using namespace std;

int main() {
    int n; cin>>n;
    //top layer
    for(int i=0;i<n;++i){
        for(int j=0;j<i+1;j++){cout<<"*";}
        for(int s=2*(n-i-1);s>0;s--){cout<<".";}
        for(int j=0;j<i+1;j++){cout<<"*";}
        cout<<endl;
    }

    //bottom layer
    for(int i=0;i<n;i++){
        for(int j=n-i;j>0;j--){cout<<"*";}
        for(int s=2*i;s>0;s--){cout<<".";}
        for(int j=n-i;j>0;j--){cout<<"*";}
        cout<<endl;
    }
    


    return 0;   
}

