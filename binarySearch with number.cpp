#include <bits/stdc++.h>

using namespace std;

double f(double x){

    // just write the equation that you want to find value of X to it
    return 4*pow(x,4)-5*pow(x,2)+9*x-11;
}

double binary_search(){
    double start=0,end=3;   //you control in it like numerical
    // 100 is just number of iteration to increase accuracy
    for(int i=0;i<100;i++){
        double mid = start +(end-start)/2;
        if(f(mid)<0.0){
            start = mid;
        }
        else{
            end =mid;
        }
    }
    return start;
}
