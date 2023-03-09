#include<iostream>
#include<array>

int main(){

std::array <int, 5> nums{};
bool is_growing = true;

for(int i = 0; i<= 4; i++){
    std::cin >> nums[i];
}

for(int i = 0; i<=3; i++){
    if(nums[i]>= nums[i+1]){
        is_growing = false;
        break;
    }
}

if(is_growing == true){
    std::cout << "Ascending order" << std::endl;
} else {
    std::cout << "Descending order" << std::endl;
}
    return 0;
}
