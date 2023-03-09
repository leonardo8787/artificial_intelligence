#include<iostream>
using namespace std;

// void limpa(char nome[100], char space[100]){
//     status == "Dirty" ? cout<<"clean" : cout<<"Suck";
//     cout<<endl;
//     location == "A" ? cout<<"Left" : cout<<"Right";
//     cout<<endl;
//     status == "Dirty" ? cout<<"suck" : cout<<"clean";
//     cout<<endl;
//     location == "A" ? cout<<"Right" : cout<<"Left";
// }

void primeiraResolucao(){
    cout<<"Quantos casos de teste? "<<endl;
    int tam; cin>>tam;
    while(tam--){
        char status[100];
        cin.getline(status, 100);
        char location[100]; 
        cin.getline(location, 100);
        int clean=0;
        int locationNumber;
        if(location == "A"){
            locationNumber=1;
        }else{
            locationNumber=2;
        }
        if(status == "Dirty"){
            if(locationNumber == 1){
                locationNumber++;
            }else{
                locationNumber--;
            }
            cout<<locationNumber<<endl;
            cout<<"Suck"<<endl;
            clean++;
        }else{
            cout<<locationNumber<<endl;
            cout<<"Clean"<<endl;
            if(locationNumber == 1){
                locationNumber++;
            }else{
                locationNumber--;
            }
        }
    }
}

void segundaResolucao(){
    pair<int, int> p[8]={{1,1},{1,0},{0,1},{0,0},{1,1},{1,0},{0,1},{0,0}};
    cout<<"Casos de teste"<<endl;
    for(int i=0; i<8; i++){
        cout<<"Caso de teste: "<<i<<endl;
        cout<<p[i].first<<" "<<p[i].second<<endl;
        if(p[i].first == 1){
            cout<<"Suck"<<endl;
            cout<<"Move Left"<<endl;
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
    }
}

int main(){
    // primeiraResolucao();
    segundaResolucao();
    return 0;
}