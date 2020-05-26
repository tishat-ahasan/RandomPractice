#include<bits/stdc++.h>
using namespace std;
int arr[1000];

struct box{
    int hieght;
    int width;
    int length;

    void insert_box(int a,int b,int c){
        hieght = a;
        width = b;
        length = c;
        return;
    }

    int volume(){
        return hieght*width*length;
    }

    void print_state(){
        cout<<"Heigth : "<<hieght<<endl;
        cout<<"Width  : "<<width<<endl;
        cout<<"Length : "<<length<<endl;
        return;
    }

    void print_co(){
        printf("(%d, %d, %d)\n",hieght,width,length);
        return;
    }

    bool operator<(const box& b) const {
        if (length < b.length) { return true;}
        else if (length == b.length){
            if (width < b.width) return true;
        }
        return false;
    }
//
//      bool operator<(const data& a) const
//    {
//        return word.size() < a.word.size();
//    }
};

int main(){
    box x1[5];
    x1[0].insert_box(10,10,10);
    x1[1].insert_box(10,4,10);
    x1[2].insert_box(10,3,20);
    x1[3].insert_box(10,2,20);
    x1[4].insert_box(10,5,20);
    sort(x1,x1+5);
    for (int i=0;i<5;i++){
        x1[i].print_co();
    }


}


