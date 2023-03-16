#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int, int> p[8]={{1,1},{1,0},{0,1},{0,0},{1,1},{1,0},{0,1},{0,0}};
    vector<pair<int, int>> data;
    int pontuacao=0;
    cout<<"Casos de teste"<<endl;
    for(int i=0; i<8; i++){
        system("pause"); 
        cout<<"Caso de teste: "<<i+1<<endl;
        cout<<p[i].first<<" "<<p[i].second<<endl;
        if(i%2==0){
            if(p[i].first == 1){
                cout<<"Suck"<<endl;
                cout<<"Move Right"<<endl;
                pontuacao++;
                if(p[i].second == 1){
                    cout<<"Suck"<<endl;
                    pontuacao++;
                }else{
                    cout<<"Clean"<<endl;
                }
                data.push_back({0,0});
            }else if(p[i].first == 0){
                cout<<"Clean"<<endl;
                cout<<"Move Right"<<endl;
                if(p[i].second == 1){
                    cout<<"Suck"<<endl;
                    pontuacao++;
                }else{
                    cout<<"Clean"<<endl;
                }
                data.push_back({0,0});
            }
        }else{
            if(p[i].second == 1){
                cout<<"Suck"<<endl;
                cout<<"Move Left"<<endl;
                pontuacao++;
                if(p[i].first == 1){
                    cout<<"Suck"<<endl;
                    pontuacao++;
                }else{
                    cout<<"Clean"<<endl;
                }
                data.push_back({0,0});
            }else if(p[i].second == 0){
                cout<<"Clean"<<endl;
                cout<<"Move Left"<<endl;
                if(p[i].second == 1){
                    cout<<"Suck"<<endl;
                    pontuacao++;
                }else{
                    cout<<"Clean"<<endl;
                }
                data.push_back({0,0});
            }
        }
        cout<<endl;
        cout<<"Pontuação: "<<pontuacao<<endl;
        cout<<endl;
    }
    cout<<"banco de dados"<<endl;
    for (auto i:data) {
        cout << i.first<<" "<< i.second << endl;
        if(i.first!=0){
            cout<<"Suck"<<endl;
            pontuacao++;
            i.first=0;
        }
        if(i.second!=0){
            cout<<"Suck"<<endl;
            pontuacao++;
            i.second=0;
        }
    }
    return 0;
} 