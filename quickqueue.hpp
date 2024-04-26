template<class T>
QuickQueue<T>::QuickQueue() {
    size = 0;
    capacity = 5;

    array = new T*[capacity];
}

template <class T>
QuickQueue<T>::QuickQueue(const QuickQueue<T> &q) {
    size = q.size;
    capacity = q.capacity;

    array = new T*[capacity];
    for(int i=0;i<size;i++)
    {
        array[i] = q.array[i];
    }
}

template <class T>
QuickQueue<T>& QuickQueue<T>::operator=(const QuickQueue<T>& q) {
    if(this != &q) {
        size = q.size;
        capacity = q.capacity;

        delete [] array;
        array = new T*[capacity];

        for (int i = 0; i < size; i++) {
            array[i] = q.array[i];
        }
    }

    return *this;
}

template <class T>
QuickQueue<T>::~QuickQueue() {
    for(int i=0;i<size;i++) {
        delete array[i];
    }
    delete [] array;
}

template <class T>
void QuickQueue<T>::Push(const T &p) {
    //sad path
    if(size >= capacity) {
        capacity += 1;
        T** temp = new T*[capacity];
        for(int i=0;i<size;i++)
        {
            temp[i] = array[i];
        }
        delete [] array;
        array = temp;
    }
    //happy path
    array[size++] = new T(p);
}

template <class T>
T* QuickQueue<T>::Pop() {
    if(size>0) {
        return array[--size];
    }
    return nullptr;
}


