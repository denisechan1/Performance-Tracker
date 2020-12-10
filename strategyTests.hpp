#ifndef __STRATEGY_TESTS_HPP__
#define __STRATEGY_TESTS_HPP__

#include "strategy.hpp"
#include "songLength.hpp"
#include "PlaylsitSubclasses.hpp"
#include "gtest/gtest.h"

Test(songLength, lengthTest1){
    string x = "playlist";
    HipHopPlaylist* test = new HipHopPlaylist(x);
    

    EXPECT_EQ(result, "a    one    0.52\nb    two    4.8\nc    three    12.3\n");
}
    
    

#endif //__STRATEGY_TESTS_HPP
