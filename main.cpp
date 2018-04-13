#define DEBUG
#include <iostream>
#include "list.h"
using namespace std;
void print(List<int>& list);
int main(int argc, char* argv){
    List<int> container;
    cout<<"Add test"<<endl;
    print(container);
    container.add(1);
    print(container);
    container.add(2);
    print(container);
    container.add(3);
    print(container);
    
    cout<<"Remove test"<<endl;
    container.remove(3);
    print(container);
    container.removeAt(1);
    print(container);

    cout<<"Add test again"<<endl;
    container.add(1);
    print(container);
    container.add(2);
    print(container);
    container.add(3);
    print(container);
    cout<<"Find test (2): " << container.find(2)<<endl;

    for(int i = 10; i < 100; i++){
        container.add(i);
    }
    for(int i = 0; i < 50; i++){
        container.removeAt(0);
    }
    print(container);



    return 0;
}
void print(List<int>& list){
    cout<<"List size: "<<list.size()<<endl;
    cout<<"[";
    for(int i = 0; i < list.size();i++){
        if(i != 0){
            cout<<",";
        }
        cout<<list[i];
    }
    cout<<"]"<<endl<<"-------------------"<<endl;
}