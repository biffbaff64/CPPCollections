#ifndef LIST_H
#define LIST_H


/**
 * A collection of assiociated items.
 * @tparam T The TYPE of list, i.e. int, float, object, etc
 */
template <typename T>
class List
{
public:
    /**
     * Creates a new List with the given initial capacity.
     * @param capacity The capacity (Defaults to @link DEFAULT_CAPACITY).
     * @param ordered Truw if this is an ordered list (Defaults to false).
     */
    explicit List(int capacity = DEFAULT_CAPACITY, bool ordered = false);

    /**
     * Creates a copy of the given List.
     * @param list The @link List to copy.
     */
    List( const List<T>& list);

    /**
     * Creates a new list and populates it with the contents of the given array.
     * @param values The array of items to add.
     */
    explicit List(T values[]);

    /**
     *
     * @param list
     * @param start
     * @param length
     * @param ordered
     */
    List(List<T>& list, int start, int length, bool ordered = false);

    /**
     *
     * @param values
     * @param start
     * @param length
     * @param ordered
     */
    List(T values[], int start, int length, bool ordered = false);

    /**
     * Adds the given T value to this list.
     * @param value
     */
    void Add(T value);
    void Add(T value, ...);
    void AddAll(List<T>& values);
    void AddAll(T values[]);
    void AddAll(List<T>& values, int start, int count);
    void AddAll(T values[], int start, int count);

    T GetAt(int index);

    void Set(int index, T value);

    void Insert(int index, int value);
    void InsertRange(int index, int count);

    void Swap(int first, int second);

    bool Contains(T value);

    int IndexOf(T value);
    int LastIndexOf(T value);

    bool RemoveValue(T value);
    T RemoveAt(int index);
    void RemoveRange(int start, int end);
    bool RemoveAll(List<T> list);
    bool RemoveAll(T array[]);

    T Pop();
    T Peek();
    T First();
    T GetRandom();

    void Clear();

    T* Shrink(int newSize);
    T* EnsureCapacity(int additionalCapacity);
    T* Resize(int newSize);
    void Truncate(int newSize);

    void Sort();
    void Reverse();
    void Shuffle();

    T* ToArray();

private:
    static constexpr int DEFAULT_CAPACITY = 16;

    int size = 0;
    bool is_ordered = false;
    T backing_array[];
};

#endif //LIST_H
