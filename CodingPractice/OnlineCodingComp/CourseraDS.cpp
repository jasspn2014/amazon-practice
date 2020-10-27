//
// Created by jassp on 14-07-2020.
//

#include <iostream>
#include <stack>
#include <string>
struct Bracket {
    Bracket(char type, int position):
            type(type),
            position(position)
    {}

    bool Matchc(char c) {
        if (type == '[' && c == ']')
            return true;
        if (type == '{' && c == '}')
            return true;
        if (type == '(' && c == ')')
            return true;
        return false;
    }

    char type;
    int position;
};

int main() {
    std::string text;
    getline(std::cin, text);

    std::stack <Bracket> opening_brackets_stack;
    for (int position = 0; position < text.length(); ++position) {
        char next = text[position];

        if (next == '(' || next == '[' || next == '{') {

        }

        if (next == ')' || next == ']' || next == '}') {
            if(Matchc(next))
                opening_brackets_stack.pop();
            else{
                cout<<position;
                break;
            }
        }
    }

    if(opening_bracket_stack.empty())
        cout<<"Success";



    return 0;
}
