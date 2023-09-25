#include<iostream>
using namespace std;
class Qwerty{
    float *arr;
    int size;
public:
    Qwerty(){
        arr=NULL;
        size=0;
    }
    Qwerty(int n){
        size=n;
        arr=new float[size];
        for(int i=0;i<size;i++){
            arr[i]=0;
        }
    }
    ~Qwerty(){
        delete []arr;
    }
    void getdata(){
        cout<<"Enter the size of the array: ";
        cin>>size;
        arr=new float[size];
        for(int i=0;i<size;i++){
            cout<<"Enter the element  "<<i+1<<": ";
            cin>>*(arr+i);
        }
    }
    void display(){
        cout<<"The array created is: ";
        for(int i=0;i<size;i++){
            cout<<*(arr+i)<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Qwerty q;
    q.getdata();
    q.display();
    return 0;
}
