/*
Student Name: ABDOULAYE GUEYE
Student ID: 2110206640
Week: 5
Topic: Shunting Yard
*/

#include <stdio.h>
#include <ctype.h>


char stack[100];
int top = -1;


void push(char c) { stack[++top] = c; }
char pop() { return stack[top--]; }


int precedence(char c) {
if(c == '+' || c == '-') return 1;
if(c == '*' || c == '/') return 2;
return 0;
}


int main() {
char infix[] = "(a+b)*c";
char postfix[100];
int k = 0;


for(int i = 0; infix[i]; i++) {
if(isalnum(infix[i])) postfix[k++] = infix[i];
else if(infix[i] == '(') push(infix[i]);
else if(infix[i] == ')') {
while(stack[top] != '(')
postfix[k++] = pop();
pop();
} else {
while(top != -1 && precedence(stack[top]) >= precedence(infix[i]))
postfix[k++] = pop();
push(infix[i]);
}
}
while(top != -1)
postfix[k++] = pop();


postfix[k] = '\0';
printf("Postfix: %s", postfix);
return 0;
}
