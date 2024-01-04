#include "core.h"

namespace snowflakes {

    class SNOWFLAKES_API  Application
    {
    public:
     Application();
     virtual ~Application();
      
      void run();
    };

    Application* createApplication();

}

