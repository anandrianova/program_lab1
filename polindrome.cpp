#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(const std::string& str) {
    std::string cleanedStr;
    
    // Убираем неалфавитные символы и приводим к нижнему регистру
    for (char ch : str) {
        if (std::isalnum(ch)) {
            cleanedStr += std::tolower(ch);
        }
    }
    
    std::string reversedStr = cleanedStr;
    std::reverse(reversedStr.begin(), reversedStr.end());
    
    return cleanedStr == reversedStr;
}

int main() {
    std::string input;
    std::cout << "Введите строку: ";
    std::getline(std::cin, input);

    if (isPalindrome(input)) {
        std::cout << "Строка является палиндромом." << std::endl;  //вывод строки, о том что она является палиндромом
    } else {
        std::cout << "Строка не является палиндромом." << std::endl;
    }

    return 0;
}