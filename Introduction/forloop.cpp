#include <iostream>

void convert(int inp,int inp2){
    
    std::string result;
    
    std::string converter[] = {"one","two","three","four",
    "five","six","seven","eight","nine"};
    
    int countup = inp;
    
    for(int i = inp - 1; i <= inp2 - 1 && i < 9; i++){
        result = converter[i];
        std::cout << result << "\n";
    }
    
    do{
        countup++;
        if(countup > 9 && countup % 2 == 0){
            std::cout << "even" << "\n";
        }
    
        else if(countup > 9 && countup % 2 == 1){
            std::cout << "odd" << "\n";
        }
        
    }while(countup < inp2);
}

int main() {
    // Complete the code.
    int inp,inp2;
    
    std::cin >> inp, std::cin >> inp2;
    
    convert(inp,inp2);

    return 0;
}
