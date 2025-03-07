//prime number question , seive of eratosthesis method is used to find the prime number in range  
//First approach to solve the problem 
//TC = O(Rlog(log(R)) + (R-L));
//Sc = O(R)


//too much good problem to understand the logic and improve problem solving

#include<bits/stdc++.h>
using namespace std;

vector<bool> seiveHelper(int right){
   vector<bool> isPrime(right+1 , true);

   isPrime[0] = false;
   isPrime[1] = false;

   for(int i=2; i<= right; i++){
      if(isPrime[i] == true) {
         for(int j=2; i*j<=right; j++){
           isPrime[i*j] = false;
         }
      }
   }
   return isPrime;
}

vector<int> closestPrimes(int left , int right){
   vector<bool> isPrime = seiveHelper(right);

   vector<int> primes;

   for(int num = left; num <= right; num++){
      if(isPrime[num] == true) {
         primes.push_back(num);
      }
   }

   int minDiff = INT_MAX;
   vector<int> result = {-1 , -1};


   for(int i=1; i<primes.size(); i++){
     int diff = primes[i] - primes[i-1];

     if(diff < minDiff){
       minDiff = diff;
       result = {primes[i-1] , primes[i]};
     }
   }

   return result;
}



//second approach is  early return approach 

//TC = O((R-L)* sqrt(R))
//Sc = O(R-L)

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num){
   if(num == 1) {
      return false; // not a  prime
   }

   for(int div = 2; div*div <= num; div++){
     if(num%div == 0){
      return false;
     }
   }

   return true;
}

vector<int> closestprimes(int left , int right) {
   vector<int> primes;

   for(int num = left; num<=right; num++){
     if(isPrime(num) == true) {
        if(!primes.empty() && num - primes.back() <= 2){
           return {primes.back() , num};
        }
        primes.push_back(num);
     }
   }


   int minDiff = INT_MAX;

   vector<int> result = {-1 , -1};

   for(int i=1; i<primes.size(); i++){
     int diff = primes[i] - primes[i-1];
     if(diff < minDiff) {
       minDiff = diff;
       result = {primes[i-1] , primes[i]};
     }
   }
   return result;
}
