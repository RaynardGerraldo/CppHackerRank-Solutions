#include <iostream>
#include <string>


int main() {
	// Complete the program
    
    std::string first,second;
    int len1 , len2;
    getline(std::cin,first);
    getline(std::cin,second);
    
    len1 = first.length();
    len2 = second.length();
    
    std::cout << len1 << " " << len2 << std::endl;
    
    std::string result = first + second;
    char firstindex = first[0];
    first[0] = second[0];
    second[0] = firstindex;
    
    std::cout << result << std::endl;
    std::cout << first << " " << second << std::endl;
    
    return 0;
}
