#pragma once

#include <new>
#include <cassert>
#include <type_traits>
#include <utility>

template <typename T>
class StaticSingleton {
public:
    // Create the singleton instance in static storage.
    // Must be called exactly once.
    template <typename... Args>
    static void create(Args&&... args) {
        assert(!created() && "Singleton already created!");
        new (getInstanceBuffer()) T(std::forward<Args>(args)...);
        setCreated(true);
    }

    // Returns a reference to the singleton instance.
    static T& instance() {
        assert(created() && "Singleton not created! Call create() first.");
        return *reinterpret_cast<T*>(getInstanceBuffer());
    }

    // Optionally, destroy the singleton (calls its destructor).
    static void destroy() {
        if (created()) {
            instance().~T();
            setCreated(false);
        }
    }

    // Delete copy and assignment to enforce singleton semantics.
    StaticSingleton(const StaticSingleton&) = delete;
    StaticSingleton& operator=(const StaticSingleton&) = delete;

protected:
    StaticSingleton() = default;
    ~StaticSingleton() = default;

private:
    // Use a function that returns a reference to a static storage buffer.
    static void* getInstanceBuffer() {
        // This static variable is defined when the function is first called.
        // By then, T should be complete.
        static typename std::aligned_storage<sizeof(T), alignof(T)>::type instanceBuffer;
        return &instanceBuffer;
    }

    // Use a function-local static boolean to track whether the instance was created.
    static bool& created() {
        static bool createdFlag = false;
        return createdFlag;
    }
    static void setCreated(bool value) {
        created() = value;
    }
};
