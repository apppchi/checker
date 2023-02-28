#include "sortic2.h"

void ra(vector <int> &a){
    int len = a.size();
    if (len > 0){
        int k = a[0];
        for(int i = 0; i < len - 1; i++){
            a[i] = a[i + 1];
        }
        a[len - 1] = k;
    }
}

void rb(vector <int> &b){
    int len = b.size();
    if (len > 0){
        int k = b[0];
        for(int i = 0; i < len - 1; i++){
            b[i] = b[i + 1];
        }
        b[len - 1] = k;
    }
}

void pa(vector <int> &a, vector <int> &b){
    if (b.size() > 0){
        int c = b[0];
        rb(b);
        b.pop_back();
        a[0] = c;
    }
}

void pb(vector <int> &a, vector <int> &b){
    if (a.size() > 0){
        int c = a[0];
        ra(a);
        a.pop_back();
        b[0] = c;
    }
}
