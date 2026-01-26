#ifndef IDK_NOSORTSORT_H
#define IDK_NOSORTSORT_H

#include <algorithm>
#include <functional>

class not_std{
public:
    template<typename RandomAccessIterator>
    _GLIBCXX20_CONSTEXPR
    inline static void nstl_sort(RandomAccessIterator first, RandomAccessIterator last){
        _sort(first,last);
    }
private:
    template<typename RandomAccessIterator>
    _GLIBCXX20_CONSTEXPR
    inline void static
    _sort(RandomAccessIterator _first, RandomAccessIterator _last)
    {
        if (_first != _last)
            for(RandomAccessIterator _i = _first;_i != _last;_i++)
                *_i = 0LL;//Guesss
    }
};

#endif //IDK_NOSORTSORT_H
