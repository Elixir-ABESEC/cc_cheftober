#include <algorithm>
#include <iostream>
#include <iterator>
#include <utility>
#include <vector>

template <typename I, typename BI>
void mergeTogether(I begin, I mid, I end, BI beginBuffer) {
  I low = begin;
  I hig = mid;
  BI buf = beginBuffer;
  while (low < mid && hig < end) {
    if (*low <= *hig) {
      std::iter_swap(low, buf);
      ++low;
    } else {
      std::iter_swap(hig, buf);
      ++hig;
    }
    ++buf;
  }
  std::move(low, mid, buf);
  std::move(hig, end, buf);

  std::size_t size = std::distance(begin, end);
  std::move(beginBuffer, std::next(beginBuffer, size), begin);
}

template <typename I, typename BI>
void mergeSortUsingBuffer(I begin, I end, BI beginBuffer) {
  std::size_t size = std::distance(begin, end);
  if (size < 2) {
    return;
  }
  std::size_t split = size / 2;
  I mid = std::next(begin, split);
  BI midBuffer = std::next(beginBuffer, split);

  mergeSortUsingBuffer(begin, mid, beginBuffer);
  mergeSortUsingBuffer(mid, end, midBuffer);

  mergeTogether(begin, mid, end, beginBuffer);
}

template <typename I> void mergeSort(I begin, I end) {
  using ValueType = typename std::iterator_traits<I>::value_type;
  std::size_t size = std::distance(begin, end);
  std::vector<ValueType> buffer(size);

  mergeSortUsingBuffer(begin, end, std::begin(buffer));
}

int main() {
  std::vector<int> a = {3, 0, 7, 5, 7, 8, 3, 1};
  mergeSort(std::begin(a), std::end(a));
  std::copy(std::begin(a), std::end(a),
            std::ostream_iterator<int>(std::cout, ", "));
  std::cout << "\n";
}