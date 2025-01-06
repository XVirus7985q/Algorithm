#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(long long n) {
  
    string ns = to_string(n);
   
    sort(ns.begin(), ns.end(),greater<>());
  
    
    return stoll(ns);
}