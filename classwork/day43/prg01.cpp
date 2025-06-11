#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main() {
    std::istream_iterator<int> inIt(std::cin);        // begin of input stream
    std::istream_iterator<int> endIt;                 // end-of-stream iterator

    std::vector<int> numbers(inIt, endIt);            // reads until EOF (Ctrl+Z in Windows or Ctrl+D in Linux)

    vector<int> num = { 1,2,3 };
  /*  num.push_back(4);
    Employee e;
    evec.emplace_back(101, "abc1");*/

    for (int n : numbers) {
        std::cout << n << " ";
    }

    return 0;
}