#include<bits/stdc++.h>

using namespace std;
int main () {
    int n;
    while (scanf ("%d", &n)) {
        if (n <= 8) {puts ("0"); continue;}
        if (n == 9) {puts ("8"); continue;}
        else {
            int c = n - 9;
            printf ("72");
            for (int i = 0; i < c - 1; ++ i) putchar('0');
            puts ("");
        }
    }
    return 0;
}

