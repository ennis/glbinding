#pragma once
#include <atomic>
#include <iterator>
#include <map>
#include <vector>

namespace glbinding
{

template <typename T>
class RingBuffer 
{

public:
    RingBuffer(unsigned int maxSize);

    bool push(T &&);

    using TailIdentifier = unsigned int;

    TailIdentifier addTail();
    void removeTail(TailIdentifier);
    const typename std::vector<T>::const_iterator cbegin(TailIdentifier key);
    bool valid(TailIdentifier key, const typename std::vector<T>::const_iterator & it);
    const typename std::vector<T>::const_iterator next(TailIdentifier key, const typename std::vector<T>::const_iterator & it);
    void release(TailIdentifier key, const typename std::vector<T>::const_iterator & it);
    uint64_t sizeTail(TailIdentifier);

    unsigned int maxSize();
    unsigned int size();
    bool isFull();
    bool isEmpty();

protected:
    uint64_t next(uint64_t current);
    void updateTail();
    uint64_t size(uint64_t, uint64_t);
    std::vector<T*> pullBlock(uint64_t, uint64_t);

protected:
    std::vector<T> m_buffer;
    const uint64_t m_size;
    std::atomic<uint64_t> m_head;
    std::atomic<uint64_t> m_tail;
    std::map<TailIdentifier, std::atomic<uint64_t>> m_tails;
    std::mutex m_tail_mutex;
};

} // namespace glbinding

#include "Ringbuffer.hpp"