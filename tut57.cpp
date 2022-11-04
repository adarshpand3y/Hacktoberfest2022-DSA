#include <iostream>
using namespace std;
class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display()
    {
    }
};

class CWHvideo : public CWH
{
    float videolength;

public:
    CWHvideo(string s, float r, float vl) : CWH(s, r)
    {
        videolength = vl;
    }
    void display(){
        cout<<"This is an amzing video with title"<<title<<endl;
        cout<<"Ratings : "<<rating<<" out of 5 stars "<<endl;
        cout<<"Length of this video is: "<<videolength<<" minutes "<<endl;

    }
};

class CWHtext : public CWH
{
    int words;

public:
    CWHtext(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display(){
        cout<<"This is an amzing video with title"<<title<<endl;
        cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars "<<endl;
        cout<<"No of words in this tutorial is: "<<words<<" words "<<endl;
        
    }
};

int main()
{
string title;
float rating, vlen;
int words;
// for code with Harry video 
title = "Django tutorial ";
vlen = 4.56;
rating = 4.89;
CWHvideo djvideo(title,rating,vlen);
djvideo.display(); 
cout<<endl;
// for code with Harry video 
title = "Django tutorial text";
words = 443;
rating = 4.19;
CWHtext djtext(title,rating,words);
djtext.display(); 

CWH* tuts[2];
tuts[0] = &djvideo;
tuts[1] = &djtext;

tuts[0]->display();
tuts[1]->display();

//Rules for virtual functions
// 1. They cannot be static
// 2. they are accessed by object pointers
// 3. virtul functions can be a friend of another class 
// 4. A virtual function in base class might not be used
// 5.If a virtual function is defined in a base class , there is no necessity of redefining 
// it in the derived class

    return 0;
}