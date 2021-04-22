/*
 * Nigel Bazzeghin
 * CIT1173
 * Lecture W
 *
 * Notes
 */

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
#include <iomanip> // to format output

using namespace std;

void print_array(int array[], int len){
    for (int i=0;i < len; i++){
        cout << array[i] << endl;
    }
}
int main() {
    const int L_LEN = 5;
    int L[L_LEN] = {10,20,30,40,50};

    // same context or a reference, not a pointer
    for (int value : L){
        cout << value << endl;
    }

    int data[] = {100,200,300};
    int data_len = sizeof(data) / sizeof(data[0]);

    print_array(data,data_len);
    const int num_months = 3;
    string months[num_months] = {"Jan", "Feb", "Mar"};

    for (int i = 0; i < num_months; i++){
        cout << months[i] << " " << &months[i] << endl;
    }

    const int num_kids = 3;
    string kids[num_kids];
    int ages[num_kids];
    string fav_colors[num_kids] = {"Green", "Blue","Purple"};

    kids[0] = "Bobby";
    ages[0] = 12;

    kids[1] = "Susan";
    ages[1] = 13;

    kids[2] = "Sam";
    ages[2] = 11;

    for (int i = 0; i < num_kids; i++){
        cout << kids[i] << " is " << ages[i] << " and likes " << fav_colors[i] << endl;
    }

    int test[5] = { 0 };    // All values in array is = 0
    int test2[5];

    for (int val: test2) {
        cout << "value=" << val <<endl;
    }

    /*
     * Homework
     * Upload file any cpp file to github
     * screenshot to prove it
     *
     * watch forbidden c++ video
     * write a few notes about the video
     *
     */

    const int NUM_EMPS = 3;
    string emps[NUM_EMPS];
    int hours[NUM_EMPS] = { 0 };

//    for (int i=0; i<NUM_EMPS;i++){
//        cout << "Enter Employee name: >";
//        cin >> emps[i];
//        cout << "Enter hours for " << emps[i] << ": >";
//        cin >> hours[i];
//    }
//
//    for (int i=0; i<NUM_EMPS; i++){
//        cout << i+1 << "\tName=" << emps[i]  << "\tHours=" << hours[i] <<endl;
//    }

    int xa[10] = { 0 };
    int ya[10] = { 0 };
    int za[10] = { 0 };

//    ya[10] = 123;
//    ya[11] = 234;
//    ya[12] = 345;
//    ya[13] = 456;

    for(int i=0;i<10;i++){
        cout << "xa " << xa[i] << " " << (int)&xa[i] <<endl;
    }
    cout << endl;
    for(int i=0;i<10;i++){
        cout << "ya " << ya[i] << " " <<  (int)&ya[i] <<endl;
    }
    cout << endl;
    for(int i=0;i<10;i++){
        cout << "za " << za[i] << " " <<  (int)&za[i] <<endl;
    }




    return 0;
}

