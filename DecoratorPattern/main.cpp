#include <bits/stdc++.h>

#include "stream.hpp"
#include "file_stream.hpp"
#include "encode_decorator.hpp"

int main(){
    std::cout << "hello" << std::endl;

    std::shared_ptr<Stream> sp = std::make_shared<FileStream>();
    sp->putString("These violent delights have violent ends.");
    sp->handleBufferFull();

    std::shared_ptr<Stream> esp = std::make_shared<EncodedDecorator>(sp);
    esp->putString("These violent delights have violent ends.");
    esp->handleBufferFull();

    return 0;
}