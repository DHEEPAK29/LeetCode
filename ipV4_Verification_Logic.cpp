#include <iostream>
using namespace std;

int octCalc(string ipv4, int indexSlice){
    int octet = 0;
    cout<<indexSlice<<" "<<ipv4<<endl;
    for(int i=0; i< indexSlice; i++){
        cout<<ipv4[i]<<"vbdfgbd"<<ipv4[i]-'0'<<endl;
        octet = octet * 10 + (ipv4[i]-'0'); //octet = ipv4[i] * 10;
    }
    return octet;
}

int main(){
    string ipv4 = "10.0.254.17";
    int start = 0; 
    int dotCount = 0;

    cout<<ipv4.size()<<endl;
    for(int i =0; i < ipv4.size(); i++){
        if(i == ipv4.size() || ipv4[i] == '.' ){
            int oct = octCalc(ipv4.substr(start, i - start), i-start);
            cout<<"fvr"<<i<<" "<< start<<" "<<oct<<endl;
            if(oct>255 || oct<0){
                cout<<"Invalid IP"<<endl;
                return 0;
            }
            start = i + 1;
            dotCount++;
        }
    }

    cout<<"Valid IP"<<endl;

    return 0;
}
