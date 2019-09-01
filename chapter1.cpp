//
// Created by 15627 on 2019/9/1.
//

#include "chapter1.h"
#include <iostream>
#include <algorithm>

using namespace std;

void topic1(){
    // use the char and ASCII code print 65 and 66 on the screen
    int a = 65, b = 66;
    cout << a << " " << b << endl;
    cout << char(a) << " " << char(b) << endl;
}

void topic2(){
    // create contain 100 variable of int type
    int p[100];
    p[1] = 2;
    cout << p[1] << endl;
}

void topic3(){
    // get sums and minimum from the 15 float variable
    int lens = 5;
    float array [lens];
    float nums = 0;
    for (int i=0;i<lens;i++){
        cin >> array[i];
        nums = nums + array[i];
    }

    sort(array, array + lens, greater <float>()); // 从大到小 降序排列


    cout << "the less element is " << array[lens-1] << endl; // 不会越位
    cout << "the count of array is " << nums << endl;
}


void topic4(){
    // int a = {1,2,3,4,5,6,7,8,9}
    // get location of 4
    // copy a to b
    // reverse a
    // find 4's location again
    // print the a and b on the screen
    int a[] = {1,2,3,4,5,6,7,8,9};
    int *location_4 = find(a, a+9, 4);
//    cout << "first find location of 4 is " << &location_4 << endl;
    cout << "first find location of 4 is " << location_4 - a << endl;
    int b[9];
    copy(a, a+9, b);
    reverse(a, a+9);
    int *location_4_to = find(a, a+9, 12);
    cout << "first find location of 4 is " << location_4_to - a << endl; // can't find the element the
                                                                         // address will be out of array
//    cout << a << "\n" << b << endl;
    for (int i: a){
        cout << i << " ";
    }
    cout << "\n";
    for (int v: b){
        cout << v << " ";
    }
}

int main(){
    std::cout << "hello world" << std::endl;
    topic1();
    topic2();
    topic3();
    topic4();
    return 0;
}


