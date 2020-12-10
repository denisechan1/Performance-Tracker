#ifndef __STRATEGY_TESTS_HPP__
#define __STRATEGY_TESTS_HPP__

#include "gtest/gtest.h"

#include "strategy.hpp"
#include "songLength.hpp"
#include "PlaylistSubclasses.hpp"
#include "artistAlphabetical.hpp"
#include "songAlphabetical.hpp"
#include "songLength.hpp"

TEST(artist, HHsongTest1){
     string x = "playlist";
     HipHopPlaylist* test = new HipHopPlaylist(x);

     artistAlphabetical* test1 = new artistAlphabetical(test);
     test1->insertionSort();
     vector<string> v = test1->getS();
     string result = v.at(0);

    EXPECT_EQ(result, "Grey Area");  //after alphabetical i think 2 Chainz should be first artist so Grey Area first?
}
TEST(artist, HHartistTest1){
     string x = "playlist";
     HipHopPlaylist* test = new HipHopPlaylist(x);

     artistAlphabetical* test1 = new artistAlphabetical(test);
     test1->insertionSort();
     vector<string> v = test1->getA();
     string result = v.at(0);

    EXPECT_EQ(result, "2 Chainz");  //after alphabetical i think 2 Chainz should be first artist?
}
TEST(artist, HHlengthTest1){
     string x = "playlist";
     HipHopPlaylist* test = new HipHopPlaylist(x);

     artistAlphabetical* test1 = new artistAlphabetical(test);
     test1->insertionSort();
     vector<double> v = test1->getL();
     double result = v.at(0);

    EXPECT_DOUBLE_EQ(result, 2.520000);  //after alphabetical i think 2 Chainz should be first artist?
}

TEST(artist, EsongTest1){
     string x = "playlist";
     EDMPlaylist* test = new EDMPlaylist(x);

     artistAlphabetical* test1 = new artistAlphabetical(test);
     test1->insertionSort();
     vector<string> v = test1->getS();
     string result = v.at(0);

    EXPECT_EQ(result, "Better With You");  //after alphabetical i think 2 Chainz should be first artist so Grey Area first?
}
TEST(artist, EartistTest1){
     string x = "playlist";
     EDMPlaylist* test = new EDMPlaylist(x);

     artistAlphabetical* test1 = new artistAlphabetical(test);
     test1->insertionSort();
     vector<string> v = test1->getA();
     string result = v.at(0);

    EXPECT_EQ(result, "3LAU, Justin Caruso, Iselin");  //after alphabetical i think 2 Chainz should be first artist?
}
TEST(artist, ElengthTest1){
     string x = "playlist";
     EDMPlaylist* test = new EDMPlaylist(x);

     artistAlphabetical* test1 = new artistAlphabetical(test);
     test1->insertionSort();
     vector<double> v = test1->getL();
     double result = v.at(0);

    EXPECT_DOUBLE_EQ(result, 3.130000);  //after alphabetical i think 2 Chainz should be first artist?
}
    

#endif //__STRATEGY_TESTS_HPP
