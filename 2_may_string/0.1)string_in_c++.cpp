












In C++, strings can be manipulated using various functions and methods provided by the Standard 
Template Library (STL) or by using built-in features of the language. Here are some common 
operations on strings in C++:

1)Concatenation: 
You can concatenate strings using the + operator or the append() method.Example:

#include <iostream>
#include <string>

int main() {
    std::string str1 = "Hello";
    std::string str2 = "World";
    std::string result = str1 + ", " + str2;
    std::cout << result << std::endl;
    return 0;
}

2)Length: 
The length() or size() method returns the length of the string.Example:

#include <iostream>
#include <string>

int main() {
    std::string s = "Hello, World!";
    std::cout << "Length: " << s.length() << std::endl;
    return 0;
}

3)Substring Extraction: 
You can use the substr() method to extract substrings.Example:

#include <iostream>
#include <string>

int main() {
    std::string s = "Hello, World!";
    std::string substr = s.substr(7, 5);  // Extracts "World"
    std::cout << substr << std::endl;
    return 0;
}

4)Searching: 
The find() method can be used to find substrings within a string.Example:

#include <iostream>
#include <string>

int main() {
    std::string s = "Hello, World!";
    size_t index = s.find("World");
    if (index != std::string::npos) {
        std::cout << "Found at index " << index << std::endl;
    } else {
        std::cout << "Not found" << std::endl;
    }
    return 0;
}


5)Replacement:
You can use the replace() method to replace occurrences of a substring with another substring.Example:

#include <iostream>
#include <string>

int main() {
    std::string s = "Hello, World!";
    s.replace(0, 5, "Hi");  // Replaces "Hello" with "Hi"
    std::cout << s << std::endl;
    return 0;
}