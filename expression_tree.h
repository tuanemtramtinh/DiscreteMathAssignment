#include <iostream>
#include <math.h>
#include <string>
#include <stack>
#include <vector>
using namespace std;

struct node {
    string data;
    node * left;
    node * right;
};

struct tree{
    node * root = nullptr;
};

node * init_data(string val);
int getPriority(string s);
bool pushConditionCheck(string s, stack <string> Stack);
void tree_create(stack <node*> &node_stack, stack <string> &operator_stack, tree &myTree, string s);
void infix2_tree(tree & myTree, stack <node*> &node_stack, stack <string> &operator_stack, int index, int size, string s);
void PostfixTraversal(node * x, string &s);
void PrefixTraversal(node * x, string &s);
void Traversal(tree myTree, string &s, int id);
string Infix2Postfix(string input);
string Infix2Prefix(string input);
void createStringArr(string * arr, string st, int & size);
void main_process();