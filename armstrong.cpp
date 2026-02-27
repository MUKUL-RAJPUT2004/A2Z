#include <bits/stdc++.h> 
bool isArmstrong(int num) {
    // Write your code here
    int form_num = 0;
    int dup = num;
    while(num>0){
        int ld = num%10;
        ld = ld*ld*ld;
        form_num = form_num + ld;
        n=n/10;
    }
    if(dup == form_num) return true;
    else return false;
}