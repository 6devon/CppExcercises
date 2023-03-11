#include<iostream>
#include<vector>


int main(){

    std::vector<char> vec;
    char character;

    while(true){
        std::cin >> character;
        if(character == '!'){
            for(int i = 0; i < vec.size(); i++){
                std::cout << vec[i] << std::endl;
            }
            break;
        } else if(character == '*'){
            vec.erase(vec.begin());
        } else if(character == '#'){
            vec.pop_back();
        } else if(character == 'a' or 'e' or 'i' or 'y' or 'u'){
            vec.insert(vec.begin(), character);
        } else {
            vec.push_back(character);
        }
    }
    return 0;
}