#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s,dup;
        for(int i = 0; i<n; i++){
            cin>>s[i];
        }
        dup = s;
        
        for(int i =0; i < n-1; i++){
            for(int j = 0; j < n-i-1; j++){
                
                if(dup[j] > dup[j+1]){
                    int temp = dup[j];
                    dup[j] = dup[j+1];
                    dup[j+1] = temp;
                }
            }
        }
        
        int count = 0;
        
        for(int i =0; i<n; i++){
            if(s[i] != dup[i]){
                count = count + 1;
            }
        }
        if(count<=1){
            cout<<"Yes"<<endl;
        }
        else
            cout<<"No"<<endl;
        
        
    }
	return 0;
}
