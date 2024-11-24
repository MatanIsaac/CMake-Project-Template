#include <gtest/gtest.h>
#include "App.hpp"

TEST(AppTest, Initialization) 
{
    App app;
    const bool check1 = app.Init("Test Title",640,480);
    EXPECT_EQ(true,check1) << "App failed to initialize";
}
