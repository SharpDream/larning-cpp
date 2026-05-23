#include <iostream>
using namespace std;



/*
deviding the sape ibnto 4 parts
n=4
...*         i=0
..*.  *      i=1
.*..  .*     i=2
*...  ..*    i=3


m=n-1=3
.*..  .*     i=0
..*.  *      i=1
...*         i=2


n=5
....*
...*.  *
..*..  .*
.*...  ..*
*....  ...*

m=4
.*...  ..*   i=0  space=m-i-2
..*..  .*    i=1  
...*.  *     i=2
....*        i=3
*/





int main() {
    int n; cin >>n;

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
