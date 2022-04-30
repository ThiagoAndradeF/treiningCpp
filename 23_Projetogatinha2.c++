#include <iostream>
#include <vector>
#include <array>
#include <iterator>

using namespace std;

using std::cout; using std::vector;
using std::endl; using std::array;
using std::copy;

int main() {
    vector<int> numbers{ 81, 117, 101, 114, 32, 110, 97, 109, 111, 114, 97, 114, 32, 99 ,111, 109, 105, 103, 111, 63};
    vector<char> chars{};

    chars.reserve(numbers.size());
    for (auto& number : numbers) {
        chars.push_back(number);
    }

    copy(chars.begin(), chars.end(),
        ostream_iterator<char>(cout));
    cout << endl;

    return 0;
}