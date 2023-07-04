#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int sp=(2*n-1)/2;

    for (int i=1; i<=n; i++){
        for (int j=1; j<=sp; j++){
            cout<<"* ";
        }
        for (int j=1; j<=2*i-1; j++){
            if (j==1||j==2*i-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        for (int j=1; j<=sp; j++){
            cout<<"* ";
        }
        cout<<endl;
        sp--;
    }

    sp=0;

     for (int i=n; i>=1; i--){
        for (int j=1; j<=sp; j++){
            cout<<"* ";
        }
        for (int j=1; j<=2*i-1; j++){
            if (j==1||j==2*i-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        for (int j=1; j<=sp; j++){
            cout<<"* ";
        }
        cout<<endl;
        sp++;
    }

return 0;
}
