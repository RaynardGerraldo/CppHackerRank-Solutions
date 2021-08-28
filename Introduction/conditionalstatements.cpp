#include <iostream>

std::string convert(){
    int num;
    std::cin >> num;
    
    std::string result;
    
    std::string convert[] = {"one","two","three","four",
    "five","six","seven","eight","nine"};

    if(num <= 9){
        result = convert[num - 1];
    } 
    
    else{
        std::cout << "Greater than 9";
    }
    
    return result;
}


int main(){
    std::cout << convert();
}
