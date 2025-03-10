//  Check if Number is a Sum of Powers of Three 
//  n's base3 representation contains the 2 or not , if contain 2 return false , if not return true

var checkThreePower = function(n){
   let x = n;
   while(x) {
      const z = Math.floor(x/3);
      if((x - z*3) === 2) return false;
      x = z;
   }
   return true;
}


// tc = O(logn)
//sc = O(1)

var checkThreePower = function(n){
   return !n.toString(3).includes('2');
}