#include "solution.h"

// std::string Solution::PrintHelloWorld() { 
//   return "**** Hello World ****"; 
// }

int Solution::NonReFactorial(int num) { 

  if(num > 13 || num < 0) {
    return -999;
  }

  if(num == 0) {
    return 1;
  }

int pace = 1;
  
  for(int i = 1; i <= num; i++) {
    pace *= i;
    } 
  return pace;
  
}

int Solution::ReFactorial(int num) { 

    if(num > 13 || num < 0) {
    return -999;
  }

    if(num == 0) {
    return 1;
  }

    if(num == 1) {
    return 1;
  }


  return ReFactorial(num - 1) * num;
  
  // return ReFactorial(num - 1) * num;
  

}
