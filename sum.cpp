#include <bits/stdc++.h>

using namespace std;

uint64_t OVERFLOW = 1LL<<31;

void calculate_probabilities_sum(){
    uint64_t i;
    uint64_t total_overflow = 0;
    uint64_t total = 1LL << 62;
    uint64_t total_not_overflow= 0;
    for(i=0;i<= (uint64_t) numeric_limits<int32_t>::max();i++){
        total_not_overflow += numeric_limits<int32_t>::max() - i;
    }
    total_overflow = total -  total_not_overflow;
    cout << (double) total_overflow/total << endl;
}

int main(){
    calculate_probabilities_sum();
    return 0;
}