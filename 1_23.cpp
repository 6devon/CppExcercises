#include<iostream>
#include<vector>

//
int main(){

    std::vector<int> vec;
    int num;
    bool is_in_vec = false;
    std::cin >> num;
    vec.push_back(num);


    while(vec.size()<10){
        std::cin >> num;

        for(int i = 0; i < vec.size(); i++){
            if(num == vec[i]){
                is_in_vec = true;
                break;
            }
        }
        if(!is_in_vec){
            vec.push_back(num);
        }
        is_in_vec = false;
        
    }
    std::cout << vec.size() << std::endl;
    return 0;

}
