#include <iostream>
using namespace std;

int main() {
    int n=4; cin >>n;

    //first half    n lines
    for(int i=0;i<n;i++){
        //first part
        for(int s=0;s<(n-i)-1;s++){cout<<".";}
        cout<<"*";
        for(int s=0;s<i;s++){cout<<".";}


        //second part
        for(int s=0;s<(i-1);s++){cout<<".";}
        if(i!=0){cout<<'*';}
        cout<<endl;
    }

    //second half (n-1) lines
    int m=n-1;
    for(int i=0;i<m;i++){
        //first part
        for(int s=0;s<i+1;s++){cout<<".";}
        cout<<"*";
        for(int s=(m-i)-1;s>0;s--){cout<<".";}

        //second half
        for(int s=(m-i)-2;s>0;s--){cout<<".";}
        if(i!=m-1){cout<<"*";}

        cout<<endl;
    }

    return 0;
}
