#include <functional>

template <typename T, typename Compare = std::less<T>>
class QSort {
public:
    static void sort(T* arr, int low, int high, Compare comp = Compare()) {
        if (low < high) {
            int pi = partition(arr, low, high, comp);

            sort(arr, low, pi - 1, comp);
            sort(arr, pi + 1, high, comp);
        }
    }

private:
    static int partition(T* arr, int low, int high, Compare comp) {
        T pivot = arr[high];
        int i = low - 1;

        for (int j = low; j <= high - 1; j++) {
            if (comp(arr[j], pivot)) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        return (i + 1);
    }

    static void swap(T& a, T& b) {
        T temp = a;
        a = b;
        b = temp;
    }
};
