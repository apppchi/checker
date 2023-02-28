#include "sortic2.h"

int str_to_int(string a){
    int k = 1;
    int b = 0;
    int f = 0;
    for(int i = 0; i < a.size(); i++){
        b = (a[a.size() - 1 - i]-'0') * k + b;
        k = k * 10;
    }
    return b;
}

void sa(vector <int> &a){
    int i = a[0];
    a[0] = a[1];
    a[1] = i;
}

void sb(vector <int> &b){
    int i = b[0];
    b[0] = b[1];
    b[1] = i;
}

void rra(vector <int> &a){
    int len = a.size();
    if (len > 0){
        int k = a[len - 1];
        for(int i = len - 1; i > 0; i--){
            a[i] = a[i - 1];
        }
        a[0] = k;
    }
}

void rrb(vector <int> &b){
    int len = b.size();
    if (len > 0){
        int k = b[len - 1];
        for(int i = len - 1; i > 0; i--){
            b[i] = b[i - 1];
        }
        b[0] = k;
    }
}
