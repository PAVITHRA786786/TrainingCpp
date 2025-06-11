#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

int main() {
    std::istream_iterator<int> inIt(std::cin);        // begin of input stream
    std::istream_iterator<int> endIt;                 // end-of-stream iterator

    std::vector<int> numbers(inIt, endIt);
    
    std::vector<int> v = { 10, 20, 30, 40 };
    
   /* for (int n : numbers) {
        std::cout << n << " ";
    }*/
   // std::ostream_iterator<int> outIt(std::cout, " ");   // output with a space
   // std::copy(v.begin(), v.end(), outIt);             // write to output stream
   std::ostream_iterator<int> outIt(std::cout, "|");             
    std::copy(numbers.begin(), numbers.end(), outIt);

    
  //  print(val,sep="|",end="+")

    return 0;
}