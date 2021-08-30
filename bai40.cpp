#include <bits/stdc++.h>

using namespace std;

string operator *(string, int);
string operator -(string, string);
string operator /(string, string);
string operator %(string, string);
bool operator <(string, string);

void Set(string&);

string GCD(string X, string Y)
{
    Set(X);
    Set(Y);
    if(X == "0")
        return Y;
    return GCD(Y % X, X);
}

int main()
{
    int botest;
    cin >> botest;
    for(int i = 0; i < botest; i++)
    {
        string X, Y;
        cin >> X >> Y;
        cout << X / Y << endl;
    }
    return 0;
}

void Set(string &X)
{
    if(X.length() == 1) return;
    while(X[0] == '0' && X.length() > 1)
        X.erase(X.begin());
}
// checked

bool operator <(string X, string Y)
{
    if(X.length() < Y.length())
        return true;
    if(X.length() > Y.length())
        return false;
    for(int i = 0; i < X.length(); i++)
        if(X[i] - '0' < Y[i] - '0')
            return true;
        else
            if(X[i] - '0' > Y[i] - '0')
                return false;
    return false;
}
// checked

string operator *(string X, int a)
{
    string res;
    int len = X.length() - 1;
    int i = len, carry = 0;
    int tmp = ((X[i] - '0')*a + carry) % 10;
    res.insert(res.begin(), tmp + '0');
    carry = ((X[i] - '0')*a + carry) / 10;
    i--;
    while(i >=  0)
    {
        tmp = ((X[i] - '0')*a + carry) % 10;
        carry = ((X[i] - '0')*a + carry) / 10;
        res.insert(res.begin(), tmp + '0');
        i--;
    }
    if(carry > 0)
        res.insert(res.begin(), carry + '0');
    return res;
}
// checked

string operator -(string X, string Y)
{
    string res;
    int len1 = X.length() - 1;
    int len2 = Y.length() - 1;
    int i, j, borrow = 0;
    for(i = len1, j = len2; i >= 0, j >= 0; i--, j--)
    {
        int a = X[i] - '0';
        int b = Y[j] - '0';
        int tmp;
        if(a < b + borrow)
        {
            tmp = (a + 10 - b - borrow);
            borrow = 1;
        }
        else
        {
            tmp = a - b - borrow;
            borrow = 0;
        }
        res.insert(res.begin(), tmp + '0');
    }
    while(i >= 0)
    {
        int a = X[i] - '0';
        int tmp;
        if(a < borrow)
        {
            tmp = a + 10 - borrow;
            borrow = 1;
        }
        else
        {
            tmp = a - borrow;
            borrow = 0;
        }
        res.insert(res.begin(), tmp + '0');
        i--;
    }
    Set(res);
    return res;
}
// checked

string operator /(string X, string Y)
{
    if(X < Y) return "0";
    if(X == Y) return "1";
    string res;
    string tmp_div, tmp;
    int len1 = X.length() - 1;
    int len2 = Y.length() - 1;
    int i = 0;
    tmp_div.push_back(X[i]);
    while(tmp_div < Y)
        {
            i++;
            tmp_div.push_back(X[i]);
            //cout << tmp_div << endl;
        }
    while(i <= len1)
    {
        int key,solan;
        if(tmp_div.length() > Y.length())
            key = 10*(tmp_div[0] - '0') + tmp_div[1] - '0';
        else
            if(tmp_div.length() == Y.length())
                key = tmp_div[0] - '0';
            else key = 0;
        solan = key / (Y[0] - '0');
        tmp = Y * solan;
        Set(tmp);
        while(!(tmp < tmp_div) && !(tmp == tmp_div))
        {
            solan--;
            tmp = Y * solan;
        }
        tmp_div = tmp_div - tmp;
        //cout << tmp << " " << solan << " " << tmp_div << endl;
        res.push_back(solan + '0');
        i++;
        tmp_div.push_back(X[i]);
        Set(tmp_div);
    }
    return res;
}
// checked

string operator %(string X, string Y)
{
    if(X < Y) return X;
    if(X == Y) return "0";
    string tmp_div, tmp;
    int len1 = X.length() - 1;
    int len2 = Y.length() - 1;
    int i = 0;
    tmp_div.push_back(X[i]);
    while(tmp_div < Y)
    {
            i++;
            tmp_div.push_back(X[i]);
            //cout << tmp_div << endl;
    }
    while(i <= len1)
    {
        int key,solan;
        if(tmp_div.length() > Y.length())
            key = 10*(tmp_div[0] - '0') + tmp_div[1] - '0';
        else
            if(tmp_div.length() == Y.length())
                key = tmp_div[0] - '0';
            else key = 0;
        solan = key / (Y[0] - '0');
        tmp = Y * solan;
        Set(tmp);
        while(!(tmp < tmp_div) && !(tmp == tmp_div))
        {
            solan--;
            tmp = Y * solan;
        }
        tmp_div = tmp_div - tmp;
        Set(tmp_div);
        //cout << tmp << " " << solan << " " << tmp_div << endl;
        if(i + 1 > len1) break;
        i++;
        tmp_div.push_back(X[i]);
        Set(tmp_div);
    }
    return tmp_div;
}
// checked

