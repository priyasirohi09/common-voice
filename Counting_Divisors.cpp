#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>arr(1000010,0);
    int len = arr.size();
    for(int i =1 ; i<len ;i++){
        for(int j =i ; j<len ;j+=i){
            arr[j]++;
        }
    }
    int test ;
    cin >> test;
    for(int t=0 ;t<test ;t++){
        int n ;
        cin >> n;
        cout << arr[n] << endl;
    }
    return 0;
}