#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
//     int n,q,k;
    
//     cin>>n;
//     cin>>q;
//     int a[n];
//     for(int i=0;i<=n;i++){
//         cin>>a[i];
//         for(int k=0;i<k;i++){
//             cin>>a[k];
//     }
//     }

//     return 0;
// }


// int main() {
//     int n ;
//     cin >> n;
//     int a[n] ;
//     for(int i =  0 ; i<n ;i++)
//     {
//         cin >> a[i];
//     }
//     cout<<"\nok\n";
//     for(int i = n-1 ; i>=0 ; i--){
//         cout<<a[i]<<" "<<endl;

//     }
//     return 0;
// }

int main(){
    int n,q;
    scanf("%d %d", &n, &q);
    int a[n][10000];
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        for(int j=0;j<k;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<q;i++){
        int x,y;
        cin>>x>>y;
        if(x>=0 && x<n && y<300000 && y>=0){
            cout<<a[x][y]<<endl;    
        }
        else{
            cout<<"Invalid Query"<<endl;
        }
    }    
    return 0;
}