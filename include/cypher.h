#ifndef _CYPHER_H
#define _CYPHER_H
#include <string>
#include <cstddef>
using namespace std;
const string a="abcdefghijklmnopqrstuvwxyz";
inline string cifrar(string input,unsigned n)
{
    size_t i;
    string res=input;
    for(i=0;i<input.length();i++)
    {
        for(size_t j=0;j<a.length();j++)
        {
            if(a[j]==input[i])
            {
                res[i]=a[(j+n)%26];
                break;
            }
        }
    }
    return res;
}
inline string descifrar(string input, unsigned n)
{
    size_t i;
    string res=input;
    for(i=0;i<input.length();i++)
    {
        for(size_t j=0;j<a.length();j++)
        {
            if(a[j]==input[i])
            {
                res[i]=a[(j-(n%26)+26)%26];
                break;
            }
        }
    }
    return res;
}
#endif