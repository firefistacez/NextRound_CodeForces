#include <iostream>

using namespace std;

int main(){
    int num,limit,inp,count=0;
    cin >> num >> limit;
    int a[num];
    for(int i=0;i<num;i++) {
        cin >> a[i];
    }
    inp = a[limit-1];
    for(int i=0;i<num;i++) {
        if(a[i] >= inp && a[i] != 0) {
            count+=1;
        }
    }
    cout << count;
}