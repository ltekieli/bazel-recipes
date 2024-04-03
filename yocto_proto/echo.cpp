#include "echo.pb.h"

#include <iostream>

int main()
{
    GOOGLE_PROTOBUF_VERIFY_VERSION;

    echo::Content content;
    content.set_text("New text!");

    std::string buffer;
    content.SerializeToString(&buffer);

    echo::Content content2;
    content2.ParseFromString(buffer);

    std::cout << content2.text() << std::endl;

    google::protobuf::ShutdownProtobufLibrary();

    return 0;
}
