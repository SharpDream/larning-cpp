#include <iostream>
using namespace std;

int main() {
    int n; cin>>n;
    //top layer
    
    for(int i=0;i<n;++i){
        for(int s=(n-i)-1;s>0;s--){cout<<".";}
        cout<<"*";
        
        if (i!=0){
            for(int s=0;s<(2*i-1);s++){cout<<".";}
            cout<<"*";
        }

        cout<<endl;
    }

    //bottom layer
    int m=n-1;
    for(int i=0;i<m;i++){

        for(int s=0;s<i+1;s++){cout<<".";}
        cout<<"*";

        if(i!=m-1){
            for(int s=(2*(m-i-1)-1);s>0;s--){cout<<".";}
            cout<<"*";
        }

        cout<<endl;
    }

    return 0;   
}


