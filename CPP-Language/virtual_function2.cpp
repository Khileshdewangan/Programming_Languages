#include <iostream>
#include <cstring>
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
    virtual void display() {}
};

class CWHvideo : public CWH
{
    float videolenth;

public:
    CWHvideo(string s, float r, float vl) : CWH(s, r)
    {
        videolenth = vl;
    }
    void display()
    {
        cout << "this is an amazing video with title : " << title << endl;
        cout << "rating : " << rating << endl;
        cout << "videolenth is : " << videolenth << endl;
    }
};

class CWHtext : public CWH
{
    int text;

public:
    CWHtext(string s, float r, int wc) : CWH(s, r)
    {
        text = wc;
    }
    void display()
    {
        cout << "this is an amazing video with title2 : " << title << endl;
        cout << "rating2 : " << rating << endl;
        cout << "number of text is  : " << text << endl;
    }
};
int main()
{
    string title;
    float rating, vlen;
    int word;

    title = "c programming ";
    rating = 4.8;
    vlen = 10.55;
    CWHvideo djvideo(title, rating, vlen);
    // djvideo.display();

    title = "c programming text ";
    rating = 4.8;
    word = 1055;
    CWHtext djtext(title, rating, word);
    // djtext.display();


    CWH *tut[2];
    tut[0] = &djvideo;
    tut[1] = &djtext;

    tut[0]->display();
    tut[1]->display();

    return 0;
}
