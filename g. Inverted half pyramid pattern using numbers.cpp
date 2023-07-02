#include <iostream>
using namespace std;

int main ()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for (int i=n; i>=1; i--){                 //Or you can use -> for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){                         //          for(int j=1; j<=n+1-i; j++){                             
            cout<<j<<" ";                                //               cout<<j<<" ";
        }                                                //           }
        cout<<endl;                                      //           cout<<endl;
    }                                                    //        }

return 0;
}