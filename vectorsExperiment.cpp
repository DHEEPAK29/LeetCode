#include <vector>
#include<string>
# include<iostream> 
using namespace std; 

int main(){ 
vector<string> ssd= {"df", "dfwsr"}; 

cout << ssd[0];
cout << ssd.front(); 
cout << ssd.back();

cout << ssd.at(1);

ssd.push_back("dfbfeb"); 

ssd.pop_back(); 

cout<<ssd.size(); 

cout<<ssd.empty(); 

for (int i =0; i<ssd.size(); i++){
    cout<<ssd[i]<<" ";
}

for (string ssd:ssd){
    cout<< ssd<<" ";
}


return 0; 
}
