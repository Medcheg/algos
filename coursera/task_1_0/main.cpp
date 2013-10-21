/*  Convert this program to C++
*   change to C++ io
*   change to one line comments
*   change defines of constants to const
*   change array to vector<>
*   inline any short function
*/

#include <iostream>
#include <vector>

const int N = 40;

int main()
{
    // initialvalue of sum
    int sum_total = 0;
    std::vector<int>            data(N);
    std::vector<int>::iterator  data_iterator;

    // storing data
    for ( int i = 0; i < N; i++)
        data.push_back(i);

    // Setting initial value of iterator
    data_iterator = data.begin();

    // Summation proccess
    while ( data_iterator != data.end() )
    {
        sum_total += *data_iterator;
        ++data_iterator;
    }

    std::cout << "Sum is: " << sum_total << std::endl;

    return 0;
}
