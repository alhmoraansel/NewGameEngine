#include<snowflakes.h>

class sandbox : public snowflakes::Application{
        public:
            sandbox() {

            }
            virtual ~sandbox() {

            }
};

snowflakes::Application* snowflakes::createApplication() {
        return new sandbox();
}