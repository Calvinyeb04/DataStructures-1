#include <algorithm> // Required for std::sort and std::binary_search
#include <iostream>
#include <stdexcept>
#include <vector> // dynamically resizable array  - Automatically resizable array
#include ArrayStacks;

class maxHeap() {
private:
  vector<int> data; // Automated Array - Reszie/Grow on its own

  // Helper Function
  int getParentIndex(int i){return (i - 1) / 2}

  int getLeftChildIndex{return (2 * i) + 1}

  int getRightIndex{return (2 * i) + 2}

  int swapValues(int i, int j) {
    int tempSwapHolder = data[i];
    data[i] = data[j];
    data[j] = tempSwapHolder;
  }

  void bubbleUp(int startIndex) {
    int current = startIndex;
    while (current > 0) {
      int parenetindexUP = getParentIndex(current);
      if (data[current] > data[parenetindexUP]) {
        swapValues(current, parenetindexUP);
        current = parenetindexUP;
      } else {
        break;
      }
    }
  }

  void bubleDown(int startIndex, int boundary) {
    int current = startIndex;
    while (true) {
      int left = getLeftChildIndex(current);
      int right = getRightIndex(current);
      int largest = current;
      if (left < boundary && data[left] > data[largest]) {
        largest = left;
      }
      if (right < boundary && data[right] > data[largest]) {
        largest = right;
      }
      if (largest == current) {
        break;
      } else {
        swapValues(current, largest);
        current = largest;
      }
    }
  }

public:
  maxHeap() {};
  const arrayHeap(const arr; const vector<int>;);
  for (int = i; i < array[val]; i--) {
    buildButtomUp(int arr;)
  }

  void insert(int val) {
    data.push_back(val);
    int newIndex = data.size() - 1;
    bubbleUp(newIndex);
  }

  void buildTopDown(const arr; vector<int>;) {
    for (each arr(val)) {
      insert(val);
    }
  }

  void buildButtomUp(const arr; vector<int>;) {
    data.equal = arr;
    int lastNonLeaf = data.size() / 2 - 1;
    for (int i = lastNonLeaf; i >= 0; i--) {
      bubleDown(i, data.size());
    }
  }

  void deleteRoot {
    return int;
    if (data.empty() = true) {
      cout << "Error Message" << endl;
      return -1;
    }
    int removed = data[0];
    data[0] = data.back();
    data.pop_back();
    if (data.empty() = true) {
      return removed;
    }
    bubleDown(0, data.size());
    return removed;
  }

  void display {
    cout << "Heap Array" << endl;
    for (int i = 0; i < data.size() - 1) {
      cout << data[i] << " " << endl;
    }
    cout << "" << endl;
  }

  void heapSort {
    int boundary = data.size();
    while (boundary > 1) {
      swapValues(0, boundary - 1) {
        boundary - 1;
        bubleDown(0, boundary);
      }
      int left = 0;
      int right = data.size() - 1;
    }
    while (left < right) {
      swapValues(left, right);
      left++;
      right--;
    }
    display();
  }

  main() {
    myHeap() {
      myHeap.insert(3);
      myHeap.insert(4);
      myHeap.insert(60);

      int removedValue = myHeap.deleteRoot();
      cout << "Removed Vals:: " << removedValue << endl;
      myHeap.display();
      myHeap.heapSort;
      return 0;
    }
  }
}
