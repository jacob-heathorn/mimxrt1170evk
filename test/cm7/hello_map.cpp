#include <cstdio>
#include <map>
#include "ftl/bump_pool_allocator.hpp"
#include "utils/dtcm_allocator.hpp"

int main() {
    printf("=== Creating map with DTCM allocator ===\n\n");
    
    // Get the DTCM bump allocator singleton
    auto& allocator = DtcmAllocator::instance();
    
    // Map uses std::_Rb_tree_node internally, so we need to initialize the pool for that type
    using NodeType = std::_Rb_tree_node<std::pair<const int, int>>;
    ftl::BumpPoolAllocator<NodeType>::initializePool(allocator);
    
    using MapType = std::map<int, int, std::less<int>, 
                             ftl::BumpPoolAllocator<std::pair<const int, int>>>;
    
    MapType myMap;
    
    printf("\n=== Inserting elements ===\n\n");
    
    myMap[1] = 100;
    myMap[2] = 200;
    myMap[3] = 300;
    
    printf("\n=== Iterating over map ===\n\n");
    
    for (const auto& [key, value] : myMap) {
        printf("Key: %d, Value: %d\n", key, value);
    }
    
    printf("\n=== Erasing element with key=2 ===\n\n");
    
    myMap.erase(2);
    
    printf("\n=== Final map contents ===\n\n");
    
    for (const auto& [key, value] : myMap) {
        printf("Key: %d, Value: %d\n", key, value);
    }
    
    printf("\n=== Map going out of scope (cleanup) ===\n\n");
    
    return 0;
}