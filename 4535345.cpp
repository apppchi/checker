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
    vector <int> d;
    if (b.size() > 0){
        int c = b[0];
        rb(b);
        for (int i = 0; i < b.size() - 1; i++){
            d.push_back(b[i]);
        }
        b = d;
        a[0] = c;
    }
}

void pb(vector <int> &a, vector <int> &b){
    vector <int> d;
    if (a.size() > 0){
        int c = a[0];
        ra(a);
        for (int i = 0; i < a.size() - 1; i++){
            d.push_back(a[i]);
        }
        a = d;
        b.push_back(c);
        rrb(b);
    }
}
