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

TEST(AddSongs, AddHipHopSong){
    HipHopPlaylist* test = new HipHopPlaylist();
    vector<string> test1 = test->getSongs();

    EXPECT_EQ(test1.at(0), "On Me");
}

TEST(AddSongs, AddHipHopArtist){
    HipHopPlaylist* test = new HipHopPlaylist();
    vector<string> test1 = test->getArtists();

    EXPECT_EQ(test1.at(3), "CJ");
}

TEST(AddSongs, AddHipHopTime){
    HipHopPlaylist* test = new HipHopPlaylist();
    vector<double> test1 = test->getTimes();

    EXPECT_EQ(test1.at(0), 2.160000);
}

TEST(AddSongs, AddHipHopSongLAST){
    HipHopPlaylist* test = new HipHopPlaylist();
    vector<string> test1 = test->getSongs();

    EXPECT_EQ(test1.at(15), "Body");
}

TEST(AddSongs, AddHipHopArtistLAST){
    HipHopPlaylist* test = new HipHopPlaylist();
    vector<string> test1 = test->getArtists();

    EXPECT_EQ(test1.at(15), "Megan Thee Stallion");
}

TEST(AddSongs, AddHipHopTimeLAST){
    HipHopPlaylist* test = new HipHopPlaylist();
    vector<double> test1 = test->getTimes();

    EXPECT_EQ(test1.at(15), 2.510000);
}

TEST(AddSongs, AddEDMSong){
    EDMPlaylist* test = new EDMPlaylist();
    vector<string> test1 = test->getSongs();

    EXPECT_EQ(test1.at(0), "Just For A Moment");
}

TEST(AddSongs, AddEDMArtist){
    EDMPlaylist* test = new EDMPlaylist();
    vector<string> test1 = test->getArtists();

    EXPECT_EQ(test1.at(3), "Gryffin, Ivy Adara");
}

TEST(AddSongs, AddEDMTime){
    EDMPlaylist* test = new EDMPlaylist();
    vector<double> test1 = test->getTimes();

    EXPECT_EQ(test1.at(0), 4.130000);
}

TEST(AddSongs, AddEDMSongLAST){
    EDMPlaylist* test = new EDMPlaylist();
    vector<string> test1 = test->getSongs();

    EXPECT_EQ(test1.at(14), "Let You Down");
}

TEST(AddSongs, AddEDMArtistLAST){
    EDMPlaylist* test = new EDMPlaylist();
    vector<string> test1 = test->getArtists();

    EXPECT_EQ(test1.at(14), "Stonebank, Danyka Nadeau");
}

TEST(AddSongs, AddEDMTimeLAST){
    EDMPlaylist* test = new EDMPlaylist();
    vector<double> test1 = test->getTimes();

    EXPECT_EQ(test1.at(14), 4.130000);
}

TEST(AddSongs, AddPopSong){
    PopPlaylist* test = new PopPlaylist();
    vector<string> test1 = test->getSongs();

    EXPECT_EQ(test1.at(0), "Positions");
}

TEST(AddSongs, AddPopArtist){
    PopPlaylist* test = new PopPlaylist();
    vector<string> test1 = test->getArtists();

    EXPECT_EQ(test1.at(3), "Shawn Mendes, Justin Bieber");
}

TEST(AddSongs, AddPopTime){
    PopPlaylist* test = new PopPlaylist();
    vector<double> test1 = test->getTimes();

    EXPECT_EQ(test1.at(0), 2.520000);
}

TEST(AddSongs, AddPopSongLAST){
    PopPlaylist* test = new PopPlaylist();
    vector<string> test1 = test->getSongs();

    EXPECT_EQ(test1.at(14), "The Business");
}

TEST(AddSongs, AddPopArtistLAST){
    PopPlaylist* test = new PopPlaylist();
    vector<string> test1 = test->getArtists();

    EXPECT_EQ(test1.at(14), "Tiesto");
}

TEST(AddSongs, AddPopTimeLAST){
    PopPlaylist* test = new PopPlaylist();
    vector<double> test1 = test->getTimes();

    EXPECT_EQ(test1.at(14), 2.440000);
}

TEST(AddSongs, AddLofiSong){
    LoFiPlaylist* test = new LoFiPlaylist();
    vector<string> test1 = test->getSongs();

    EXPECT_EQ(test1.at(0), "Gasteria");
}

TEST(AddSongs, AddLofiArtist){
    LoFiPlaylist* test = new LoFiPlaylist();
    vector<string> test1 = test->getArtists();

    EXPECT_EQ(test1.at(3), "Moody Bit");
}

TEST(AddSongs, AddLofiTime){
    LoFiPlaylist* test = new LoFiPlaylist();
    vector<double> test1 = test->getTimes();

    EXPECT_EQ(test1.at(0), 1.080000);
}

TEST(AddSongs, AddLofiSongLAST){
    LoFiPlaylist* test = new LoFiPlaylist();
    vector<string> test1 = test->getSongs();

    EXPECT_EQ(test1.at(14), "Alien Signals");
}

TEST(AddSongs, AddLofiArtistLAST){
    LoFiPlaylist* test = new LoFiPlaylist();
    vector<string> test1 = test->getArtists();

    EXPECT_EQ(test1.at(14), "Lo-Fi Like, Simax");
}

TEST(AddSongs, AddLofiTimeLAST){
    LoFiPlaylist* test = new LoFiPlaylist();
    vector<double> test1 = test->getTimes();

    EXPECT_EQ(test1.at(14), 2.060000);
}

TEST(AddSongs, AddRnBSong){
    RnBPlaylist* test = new RnBPlaylist();
    vector<string> test1 = test->getSongs();

    EXPECT_EQ(test1.at(0), "Not Another Love Song");
}

TEST(AddSongs, AddRnBArtist){
    RnBPlaylist* test = new RnBPlaylist();
    vector<string> test1 = test->getArtists();

    EXPECT_EQ(test1.at(3), "Teyana Tayor, Iman");
}

TEST(AddSongs, AddRnBTime){
    RnBPlaylist* test = new RnBPlaylist();
    vector<double> test1 = test->getTimes();

    EXPECT_EQ(test1.at(0), 3.380000);
}

TEST(AddSongs, AddRnBSongLAST){
    RnBPlaylist* test = new RnBPlaylist();
    vector<string> test1 = test->getSongs();

    EXPECT_EQ(test1.at(14), "Lost One");
}

TEST(AddSongs, AddRnBArtistLAST){
    RnBPlaylist* test = new RnBPlaylist();
    vector<string> test1 = test->getArtists();

    EXPECT_EQ(test1.at(14), "Jazmine Sullivan");
}

TEST(AddSongs, AddRnBTimeLAST){
    RnBPlaylist* test = new RnBPlaylist();
    vector<double> test1 = test->getTimes();

    EXPECT_EQ(test1.at(14), 3.000000);
}

TEST(AddSongs, AddNaturalSong){
    NaturalPlaylist* test = new NaturalPlaylist();
    vector<string> test1 = test->getSongs();

    EXPECT_EQ(test1.at(0), "Suburban Forest Rain 1");
}

TEST(AddSongs, AddNaturalArtist){
    NaturalPlaylist* test = new NaturalPlaylist();
    vector<string> test1 = test->getArtists();

    EXPECT_EQ(test1.at(3), "Yuhe");
}

TEST(AddSongs, AddNaturalTime){
    NaturalPlaylist* test = new NaturalPlaylist();
    vector<double> test1 = test->getTimes();

    EXPECT_EQ(test1.at(0), 2.180000);
}

TEST(AddSongs, AddNaturalSongLAST){
    NaturalPlaylist* test = new NaturalPlaylist();
    vector<string> test1 = test->getSongs();

    EXPECT_EQ(test1.at(14), "Smoothe Suburban Forest Rain 2");
}

TEST(AddSongs, AddNaturalArtistLAST){
    NaturalPlaylist* test = new NaturalPlaylist();
    vector<string> test1 = test->getArtists();

    EXPECT_EQ(test1.at(14), "Mori Desu");
}

TEST(AddSongs, AddNaturalTimeLAST){
    NaturalPlaylist* test = new NaturalPlaylist();
    vector<double> test1 = test->getTimes();

    EXPECT_EQ(test1.at(14), 2.340000);
}



#endif //_FACTORY_TESTS_HPP