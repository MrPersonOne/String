#include <iostream>
using namespace std;

public void findTheLongString(string *str);

int main()
{
    string a="abcabcaa";
    if(assertString(findTheLongString(&a),3))
    {
        cout<<"测试通过！"；
    }
    else
    {
        cout<<"测试不通过！"；
    }
    
    string b="abcaabcdefghigkg";
    if(assertString(findTheLongString(&b),12))
    {
        cout<<"测试通过！"；
    }
    else
    {
        cout<<"测试不通过！"；
    }
    string c="aaabcdefgaabcdefghijam";
    if(assertString(findTheLongString(&c),10))
    {
        cout<<"测试通过！"；
    }
    else
    {
        cout<<"测试不通过！"；
    }
    string d="bbbbbaaaaaaaaaaaacccccccccccccccccccccccc"
    if(assertString(findTheLongString(&d),2))
    {
        cout<<"测试通过！"；
    }
    else
    {
        cout<<"测试不通过！"；
    }
    string e="abcdefghigklmnopqrstuvwxyzaaaaaaaaaabbbbbb";
    if(assertString(findTheLongString(&e),26))
    {
        cout<<"测试通过！"；
    }
    else
    {
        cout<<"测试不通过！"；
    }
    return 0;
}
bool assertString(int m,int n)
{
    bool f=false;
    if(m==n)
    {f=true;}
    else
    {f=false;}
    return f;
}
