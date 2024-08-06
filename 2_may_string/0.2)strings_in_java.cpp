Java provides a rich set of methods and functions for working with strings through the java.lang.String class.
Here are some commonly used string functions in Java:









1)charAt(int index):
Returns the character at the specified index within the string.

String str = "Hello";
char ch = str.charAt(0); // Returns 'H'

2)length(): 
Returns the length of the string.

String str = "Hello";
int length = str.length(); // Returns 5

3)substring(int beginIndex) or substring(int beginIndex, int endIndex): 
Returns a substring of the original string.

String str = "Hello";
String sub1 = str.substring(1); // Returns "ello"
String sub2 = str.substring(1, 3); // Returns "el"


4)toUpperCase() and toLowerCase(): 
Converts the string to upper or lower case.

String str = "Hello";
String upperCase = str.toUpperCase(); // Returns "HELLO"
String lowerCase = str.toLowerCase(); // Returns "hello"

5)indexOf(String str) or indexOf(String str, int fromIndex): 
Returns the index within the string of the first occurrence of the specified substring.

String str = "Hello";
int index1 = str.indexOf("l"); // Returns 2
int index2 = str.indexOf("l", 3); // Returns 3

6)startsWith(String prefix) and endsWith(String suffix): 
Checks if the string starts or ends with the specified prefix or suffix.

String str = "Hello";
boolean startsWith = str.startsWith("He"); // Returns true
boolean endsWith = str.endsWith("lo"); // Returns true

7)replace(char oldChar, char newChar) or replace(CharSequence target, CharSequence replacement): 
Replaces occurrences of a specified character or substring.

String str = "Hello";
String replaced1 = str.replace('l', 'x'); // Returns "Hexxo"
String replaced2 = str.replace("lo", "p"); // Returns "Help"