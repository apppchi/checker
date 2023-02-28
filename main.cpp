#include "sortic2.h"

using namespace std;

int main()
{
    vector <string> c;
    vector <int> a;
    vector <int> b;
    vector <int> d;
    int y;
    string w, l;
    for(int i = 0; w != "!"; i++){
        cin >> w;
        if (w != "!")
            y = str_to_int(w);
        else
            break;
        a.push_back(y);
    }
    l = " ";
    for(int i = 0; l != "*"; i++){
        cin >> l;
        if (l != "*"){
            c.push_back(l);
            l = " ";
        }
        else
            break;
    }
    for(int i = 0; i < c.size(); i++){
        if (c[i] == "sa")
            sa(a);
        else if (c[i] == "sb")
            sb(b);
        else if (c[i] == "ss"){
            sb(b);
            sa(a);
        }
        else if (c[i] == "pa")
            pa(a, b);
        else if (c[i] == "pb")
            pb(a, b);
        else if (c[i] == "ra")
            ra(a);
        else if (c[i] == "rb")
            rb(b);
        else if (c[i] == "rr"){
            ra(a);
            rb(b);
        }
        else if (c[i] == "rra")
            rra(a);
        else if (c[i] == "rrb")
            rrb(b);
        else if (c[i] == "rrr"){
            rra(a);
            rrb(b);
        }
    }
    d = a;
    for (int i = 0; i < d.size(); i++){
        for (int j = 0; j < d.size() - 1; j++){
            if (d[j] > d[j + 1]){
                int p = d[j];
                d[j] = d[j + 1];
                d[j+1] = p;
            }
        }
    }
    if (a == d)
        cout << "OK";
    else
        cout << "KO";
}
