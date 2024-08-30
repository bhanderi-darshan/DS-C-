#include <iostream>
#include <string>

std::string removeOutermostParentheses(const std::string& str) {
    // Check if the string has outermost parentheses
    if (str.length() > 1 && str.front() == '(' && str.back() == ')') {
        // Return the substring without the outermost parentheses
        return str.substr(1, str.length() - 2);
    }
    // Return the original string if no outermost parentheses found
    return str;
}

int main() {
    std::string str = "()())()";
    std::string result = removeOutermostParentheses(str);
    std::cout << "Original String: " << str << std::endl;
    std::cout << "Modified String: " << result << std::endl;
    return 0;
}
