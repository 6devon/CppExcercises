#include<iostream>
#include<vector>

//create vector with numers, create second vector that will have even numers from v1 at the front and odd at the back

int main(){

std::vector<int> wektor = {1, 2, 3, 4, 4, 6};
std::vector<int> wektor2;

for(int i =0; i <wektor.size(); i++){
    if(wektor[i]%2 == 0){
        wektor2.push_back(wektor[i]);
    } 
}
for(int i =0; i < wektor.size(); i++){
    if(wektor[i]%2 != 0){
        wektor2.push_back(wektor[i]);
    } 
}
for(int i = 0; i < wektor2.size(); i++){
    std::cout << wektor2[i] << std::endl;
}

}