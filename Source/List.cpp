#include "List.h"

template < typename T >
List<T>::List( int capacity, const bool ordered )
{
    backing_array = new T[capacity];
    is_ordered = ordered;
    size = capacity;
}

template < typename T >
List<T>::List( const List<T>& list )
{
    backing_array = new T[list.size];
    is_ordered = list.is_ordered;
    size = list.size;

    AddAll(list);
}

template < typename T >
List<T>::List( T values[] )
{
}

template < typename T >
List<T>::List( List<T>& list, int start, int length, bool ordered )
{
}

template < typename T >
List<T>::List( T values[], int start, int length, bool ordered )
{
}

/**
 * Adds the given object to the end of this list. The size of the list is increased
 * by one. If required, the capacity of the list is doubled before adding the new element.
 * @param value The object to be added to the end of the list.
 */
template < typename T >
void List<T>::Add( T value )
{
}

/**
 * Adds the given object(s) to the end of this list. The size of the list is increased
 * by one for each object added. If required, the capacity of the list is doubled before
 * adding new element(s).
 * @param value The object(s) to be added to the end of the list.
 */
template < typename T >
void List<T>::Add( T value, ... )
{
}

template < typename T >
void List<T>::AddAll( List<T>& values )
{
}

template < typename T >
void List<T>::AddAll( List<T>& values, int start, int count )
{
}

template < typename T >
void List<T>::AddAll( T values[] )
{
}

template < typename T >
void List<T>::AddAll( T values[], int start, int count )
{
}

template < typename T >
T List<T>::GetAt( int index )
{
}

template < typename T >
void List<T>::Set( int index, T value )
{
}

template < typename T >
void List<T>::Insert( int index, int value )
{
}

template < typename T >
void List<T>::InsertRange( int index, int count )
{
}

template < typename T >
void List<T>::Swap( int first, int second )
{
}

template < typename T >
bool List<T>::Contains( T value )
{
}

template < typename T >
int List<T>::IndexOf( T value )
{
}

template < typename T >
int List<T>::LastIndexOf( T value )
{
}

template < typename T >
bool List<T>::RemoveValue( T value )
{
}

template < typename T >
T List<T>::RemoveAt( int index )
{
}

template < typename T >
void List<T>::RemoveRange( int start, int end )
{
}

template < typename T >
bool List<T>::RemoveAll( List<T> list )
{
}

template < typename T >
bool List<T>::RemoveAll( T array[] )
{
}

template < typename T >
T List<T>::Pop()
{
}

template < typename T >
T List<T>::Peek()
{
}

template < typename T >
T List<T>::First()
{
}

template < typename T >
T List<T>::GetRandom()
{
}

template < typename T >
void List<T>::Clear()
{
}

template < typename T >
T* List<T>::Shrink( int newSize )
{
}

template < typename T >
T* List<T>::EnsureCapacity( int additionalCapacity )
{
}

template < typename T >
T* List<T>::Resize( int newSize )
{
}

template < typename T >
void List<T>::Truncate( int newSize )
{
}

template < typename T >
void List<T>::Sort()
{
}

template < typename T >
void List<T>::Reverse()
{
}

template < typename T >
void List<T>::Shuffle()
{
}

template < typename T >
T* List<T>::ToArray()
{
}
