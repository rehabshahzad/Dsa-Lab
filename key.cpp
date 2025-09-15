#include<bits/stdc++.h>
using namespace std;
vector<int> findKey(vector<int> arr, int k){
    vector<int> answer;
    if (arr.empty()){
        return answer;
    }
    else{
        for (int i=0; i<arr.size(); i++){
                    if(arr[i]==k){
                     answer.push_back(i);
                    }
                    else
                   continue;
        }
       
            return answer;
        
    }
}
int main(){
    int s;
    cout<<"Enter size of array";
    cin>>s;
    cout<<"Enter the elements of array"<<endl;
    vector<int> a(s); //vector a of size s
    for (int i=0; i<s; i++){
        cin>>a[i];
    }
    int key;
    cout<<"enter key";
        cin>>key;

   vector<int> ans= findKey(a,key);
    if(a.empty()){
        cout<<"It is empty";
    }
    else if( ans.empty()){
        cout<<"Key isnt found";
    }
    else{
       for(int i=0 ; i< ans.size(); i++ ){
        cout<<ans[i];
        cout<<endl;
       }
      
    }
}