include<iostream>
	using namespace std;
	int main(){
	int v[10],posmaior,posmenor,maior,menor;
	menor=2147483647;
    maior=2147483647;
    for(int i=0; i<10; i++){
        cout<< "digite o valor\n";
        cin >> v[i];
        if(v[i]>maior){
            maior=v[i];
            posmaior=i;
        }
        if(v[i]<menor){
            menor=v[i];
            posmenor=i;
        }
       }
    return0
    }