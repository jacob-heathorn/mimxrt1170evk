// bits/ftl_mutex.cpp
#include "mutex.hpp"

namespace ftl {
// Tag types for lock_guard
struct defer_lock_t {};
struct try_to_lock_t {};
struct adopt_lock_t {};

inline constexpr defer_lock_t defer_lock{};
inline constexpr try_to_lock_t try_to_lock{};
inline constexpr adopt_lock_t adopt_lock{};

// Simplified lock_guard
template <class Mutex>
class lock_guard {
private:
    Mutex& mtx;

public:
    explicit lock_guard(Mutex& m) : mtx(m) { mtx.lock(); }
    lock_guard(Mutex& m, adopt_lock_t) : mtx(m) {} // Assumes already locked
    ~lock_guard() { mtx.unlock(); }

    lock_guard(const lock_guard&) = delete;
    lock_guard& operator=(const lock_guard&) = delete;
};
} // namespace ftl
