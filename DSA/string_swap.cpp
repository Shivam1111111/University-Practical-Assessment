#include<iostream>
using namespace std;

int main(){
    // string s;
    // cin>>s;
    
    // cout<<s[0];
    string s;
    int size;
    cin>>size;
    for(int i = 0; i < size; i++){
        cin>>s[i];
    }
    string dup = s;

    // for(int i =0; i < size; i++){
    //     cout<<s[i];
    // }
    // string dup = s;
    // for(int i = 0; i<size; i++){
    //     cout<<dup[i];

       for(int i =0; i < size-1; i++){
            for(int j = 0; j < size-i-1; j++){
                
                if(dup[j] > dup[j+1]){
                    int temp = dup[j];
                    dup[j] = dup[j+1];
                    dup[j+1] = temp;
            }
        }
    }
    for(int i = 0; i < size; i++){
        cout<<dup[i];
    }
} 
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
                count++;
            }
        }
        if(count <= 1){
            cout<<"Yes"<<endl;
        }
        else
            cout<<"No"<<endl;
        
        }
    
	return 0;
}
#include <bits/stdc++.h>
using namespace std;


void swap(char* a, char* b){
    char temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(string& s, int n){
    int i, j, min_ind;
    for(i=0; i<n; i++){
        min_ind=i;
        for(j=i+1; j<n; j++){
            if(int(s[j]) < int(s[min_ind])){
                min_ind = j;
            }
        }
        swap(&s[i], &s[min_ind]);
    }
}

int diffCount(string o, string s, int n){
    int count = 0;
    for(int i=0; i < o.length(); i++){
        if(o[i] != s[i]){
            count++;
        }
    }
    return count-1;
}

int main() {
	int t;cin>>t;
	while(t--){
	    int n;
	    string s;
	    cin >> n >> s;
	    string o = s;
	    selectionSort(s, n);
	    if(diffCount(o, s, n) <= 1){
	        cout << "YES" << endl;
	    } else {
	        cout << "NO" << endl;
	    }
	}
	return 0;
}

