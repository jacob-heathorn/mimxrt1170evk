#include "mutex.hpp"
#include "utils/dtcm_allocator.hpp"

#include "tx_api.h"



namespace ftl {

static char kMutexName[] = "FtlMutex";

struct mutex::impl {
    TX_MUTEX handle;
    bool initialized;
};

mutex::mutex() noexcept {
  pimpl = DtcmAllocator::instance().allocate<mutex::impl>();
  pimpl->initialized = (tx_mutex_create(&pimpl->handle, kMutexName, TX_NO_INHERIT) == TX_SUCCESS);
}

mutex::~mutex() noexcept {
    if (pimpl->initialized) {
        tx_mutex_delete(&pimpl->handle);
    }
    delete pimpl;
}

void mutex::lock() {
    if (pimpl->initialized) {
        tx_mutex_get(&pimpl->handle, TX_WAIT_FOREVER);
    }
}

bool mutex::try_lock() {
    if (!pimpl->initialized) return false;
    return (tx_mutex_get(&pimpl->handle, TX_NO_WAIT) == TX_SUCCESS);
}

void mutex::unlock() {
    if (pimpl->initialized) {
        tx_mutex_put(&pimpl->handle);
    }
}

mutex::native_handle_type mutex::native_handle() {
    return &pimpl->handle;
}
} // namespace ftl
