#pragma once
#include<stdio.h>

#ifdef SNOWFLAKES_PLATFORM_WINDOWS

extern snowflakes::Application* snowflakes::createApplication();

int main(int argc , char* argv[]) {
        printf("Snowflakes Engine\n");
        auto newGameEngine = snowflakes::createApplication();
        newGameEngine->run();
        delete newGameEngine;
}

#endif // SNOWFLAKES_PLATFORM_WINDOWS