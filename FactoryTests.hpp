#ifndef _FACTORYTESTS_HPP_
#define _FACTORYTESTS_HPP_

#include "gtest/gtest.h"

#include "ConcreteFactory.hpp"
#include "AbstractProduct.hpp"
#include "PlaylistSubclasses.hpp"

#include <iostream>
#include <string>

using namespace std;

TEST(AddPlaylist, AddHipHop){
    string hip1 = "hip";
    ConcreteFactory* test = new ConcreteFactory();
    HipHopPlaylist* x = test->CreateHipHopPlaylist(hip1);

    EXPECT_EQ(x->getTitle(), hip1);
}

TEST(AddPlaylist, AddEDM){
    string edm1 = "edm";
    ConcreteFactory* test = new ConcreteFactory();
    EDMPlaylist* x = test->CreateEDMPlaylist(edm1);

    EXPECT_EQ(x->getTitle(), edm1);
}

TEST(AddPlaylist, AddPop){
    string pop1 = "pop";
    ConcreteFactory* test = new ConcreteFactory();
    PopPlaylist* x = test->CreatePopPlaylist(pop1);

    EXPECT_EQ(x->getTitle(), pop1);
}

TEST(AddPlaylist, AddLoFi){
    string lofi1 = "lofi";
    ConcreteFactory* test = new ConcreteFactory();
    LoFiPlaylist* x = test->CreateLoFiPlaylist(lofi1);

    EXPECT_EQ(x->getTitle(), lofi1);
}

TEST(AddPlaylist, AddRnB){
    string rnb1 = "rnb";
    ConcreteFactory* test = new ConcreteFactory();
    RnBPlaylist* x = test->CreateRnBPlaylist(rnb1);

    EXPECT_EQ(x->getTitle(), rnb1);
}

TEST(AddPlaylist, AddNatural){
    string natural1 = "rnb";
    ConcreteFactory* test = new ConcreteFactory();
    NaturalPlaylist* x = test->CreateNaturalPlaylist(natural1);

    EXPECT_EQ(x->getTitle(), natural1);
}

#endif //_FACTORY_TESTS_HPP