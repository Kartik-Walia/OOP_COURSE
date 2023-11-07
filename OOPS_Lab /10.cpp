#include <iostream>
using namespace std;
void reversit(char *str){
    int start = 0;
    int end = 0;
    while (str[end] != '\0'){
        end++;
    }
    end--;
    while (start < end){
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
int main(){
    char input[100];
    cout << "Enter a string: ";
    cin.getline(input, sizeof(input));
    reversit(input);
    cout << "Reversed string: " << input << endl;
    return 0;
}

