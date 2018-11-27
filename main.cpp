/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: GoOne
 *
 * Created on November 26, 2018, 5:20 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */

string concatenate(string& a, string& b){
    
    a = "change a";
    b = "change b";
    return a+b;
}

template <class T>
T sum(T a, T b){
    T result;
    result = a + b;
    return result;
}

int main(int argc, char** argv) {
    
    cout<<"hello world."<<endl;
    
    string a = "aaaaa";
    string b = "bbbbb";
    
    cout<<concatenate(a, b)<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    
    int i = 5, j = 6;
    double id = 5.0, jd = 6.0;
    
    cout<<sum<int>(i, j)<<endl;
    cout<<sum<double>(id, jd)<<endl;

    return 0;
}

