#include<bits/stdc++.h>

using namespace std;

template <typename T> class dearray
{
private:
    T* arr;
    int capacity;
    int current_size;
    int start;
    int end;
    int max(int x, int y)
    {
        if (x > y)
            return x;
        else
            return y;
    }
    int next_two_power(int value)
    {
        if (value == 0)
            return 1;
        int ans = 0, temp_value;
        temp_value = value;
        while (temp_value != 1)
        {
            temp_value = temp_value / 2;
            ans++;
        }
        ans = (1 << ans);
        if (ans < value)
            ans = ans * 2;
        return ans;
    }

public:
    dearray()
    {
        arr = new T[1];
        capacity = 1;
        current_size = 0;
        start = 0;
        end = 0;
    }
    dearray(int size)
    {
        arr = new T[max(1, size)];
        capacity = next_two_power(size);
        current_size = size;
        start = (capacity - current_size) / 2;
        end = (capacity - current_size) / 2 + current_size;
        for (int i = start; i < end; i++)
        {
            arr[i] = 0;
        }
    }
    dearray(int size, T value)
    {
        arr = new T[max(1, size)];
        capacity = next_two_power(size);
        current_size = size;
        start = (capacity - current_size) / 2;
        end = (capacity - current_size) / 2 + current_size;
        for (int i = start; i < end; i++)
        {
            arr[i] = value;
        }
    }
    ~ dearray()
    {
        delete [] arr;
    }
    void push_back()
    {

    }
    void push_front()
    {

    }
    void pop_back()
    {
        if (start == end)
            start++;
        current_size--;
    }
    void pop_front()
    {
        end--;
        current_size--;
    }
    void print()
    {
        for (int i = 0; i < capacity; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    dearray<int> a;
    return 0;
}