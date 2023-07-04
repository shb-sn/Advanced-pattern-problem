#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int coef=1;
    for(int i=0; i<=n; i++){
        for(int sp=1; sp<=n-i; sp++){
            cout<<" ";
        }
        for(int j=0; j<=i; j++){
            if (i==0||j==0){
                coef=1;
            }
            else {
                coef= coef*(i-j+1)/j;
            }
            cout<<coef<<" ";
        }
        cout<<endl;
    }

return 0;
}