#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n, q;
    cin >> n >> q;
    // vector must be added.

    vector<vector<int> > a(n);
    for (int i = 0; i < n; i++)
    {
        int s;
        cin >> s;
        a[i].resize(s);
        for (int j = 0; j < s; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int k = 0; k < q; k++)
    {   int i,j;
        cin >>i>>j;
        
        cout << a[i][j] << endl;
    }

    return 0;
}

// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */

//     int n, q;
//     cin >> n >> q;
//     // vector must be added.

//     vector<vector<int> > a(n);
//     for (int i = 0; i < n; i++)
//     {
//         int s;
//         cin >> s;
//         a[i].resize(s);
//         for (int j = 0; j < s; j++)
//         {
//             cin >> a[i][j];
//         }
//     }
//     for (int k = 0; k < q; k++)
//     {   int i,j;
//         cin >>i>>j;
        
//         cout << a[i][j] << endl;
//     }

//     return 0;
// }

// // int main() {
// //     int n ;
// //     cin >> n;
// //     int a[n] ;
// //     for(int i =  0 ; i<n ;i++)
// //     {
// //         cin >> a[i];
// //     }
// //     cout<<"\nok\n";
// //     for(int i = n-1 ; i>=0 ; i--){
// //         cout<<a[i]<<" "<<endl;

// //     }
// //     return 0;
// // }

// // // int main() {
// // //     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
// // //     int n,q,k;

// // //     cin>>n;
// // //     cin>>q;
// // //     int a[n];
// // //     for(int i=0;i<=n;i++){
// // //         cin>>a[i];
// // //         for(int k=0;i<k;i++){
// // //             cin>>a[k];
// // //     }
// // //     }

// // //     return 0;
// // // }

// // // int main() {
// // //     int n ;
// // //     cin >> n;
// // //     int a[n] ;
// // //     for(int i =  0 ; i<n ;i++)
// // //     {
// // //         cin >> a[i];
// // //     }
// // //     cout<<"\nok\n";
// // //     for(int i = n-1 ; i>=0 ; i--){
// // //         cout<<a[i]<<" "<<endl;

// // //     }
// // //     return 0;
// // // }

