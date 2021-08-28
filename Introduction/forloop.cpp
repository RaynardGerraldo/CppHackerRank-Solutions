#include <iostream>

void convert(int inp,int inp2){
    
    std::string result;
    
    std::string converter[] = {"one","two","three","four","five","six","seven","eight","nine"};
    
    
    for(int i = inp - 1; i <= inp2 - 1 && i < 9; i++){
        result = converter[i];
        std::cout << result << std::endl;            
    }
}


int main() {
    // Complete the code.
    int inp,inp2;
    
    std::cin >> inp, std::cin >> inp2;
    
    convert(inp,inp2);
    
    int i = inp;
    
    do{
        i++;
        
        if(i > 9 && i % 2 == 0){
            std::cout << "even" << std::endl;
        }
    
        else if(i > 9 && i % 2 == 1){
            std::cout << "odd" << std::endl;
            
        }
        
    }while(i < inp2);

    return 0;
}
