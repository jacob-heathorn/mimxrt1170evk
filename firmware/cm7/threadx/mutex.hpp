#pragma once

namespace ftl {
class mutex {
private:
    struct impl;           // Forward declaration of implementation
    impl* pimpl;           // Pointer to implementation

public:
    mutex() noexcept;
    ~mutex() noexcept;
    void lock();
    bool try_lock();
    void unlock();

    mutex(const mutex&) = delete;
    mutex& operator=(const mutex&) = delete;

    using native_handle_type = void*;
    native_handle_type native_handle();
};

} // namespace ftl

#if defined(__cplusplus) && __cplusplus >= 201103L
#include "bits/ftl_mutex.hpp"
#endif