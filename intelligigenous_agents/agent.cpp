#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int, int> p[8]={{1,1},{1,0},{0,1},{0,0},{1,1},{1,0},{0,1},{0,0}};
    cout<<"Casos de teste"<<endl;
    for(int i=0; i<8; i++){
        cout<<"Caso de teste: "<<i<<endl;
        cout<<p[i].first<<" "<<p[i].second<<endl;
        if(i%2==0){
            if(p[i].first == 1){
                cout<<"Suck"<<endl;
                cout<<"Move Right"<<endl;
                if(p[i].second == 1){
                    cout<<"Suck"<<endl;
                }else{
                    cout<<"Clean"<<endl;
                }
            }else if(p[i].first == 0){
                cout<<"Clean"<<endl;
                cout<<"Move Right"<<endl;
                if(p[i].second == 1){
                    cout<<"Suck"<<endl;
                }else{
                    cout<<"Clean"<<endl;
                }
            }
        }else{
            if(p[i].second == 1){
                cout<<"Suck"<<endl;
                cout<<"Move Left"<<endl;
                if(p[i].first == 1){
                    cout<<"Suck"<<endl;
                }else{
                    cout<<"Clean"<<endl;
                }
            }else if(p[i].second == 0){
                cout<<"Clean"<<endl;
                cout<<"Move Left"<<endl;
                if(p[i].second == 1){
                    cout<<"Suck"<<endl;
                }else{
                    cout<<"Clean"<<endl;
                }
            }
        }
    }
    return 0;
}