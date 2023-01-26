#include <bits/stdc++.h>

#include "stream.hpp"
#include "file_stream.hpp"
#include "memory_stream.hpp"
#include "encode_decorator.hpp"
#include "compress_decorator.hpp"

int main(){
    std::cout << "hello" << std::endl;

    std::shared_ptr<Stream> sp = std::make_shared<FileStream>();
    //std::shared_ptr<Stream> sp = std::make_shared<MemoryStream>();

    std::shared_ptr<Stream> esp = std::make_shared<EncodedDecorator>(sp);
    //esp->putString("These violent delights have violent ends.");
    //esp->handleBufferFull();
    std::shared_ptr<Stream> ecsp = std::make_shared<CompressDecorator>(esp);
    ecsp->putString("These violent delights have violent ends.");
    ecsp->handleBufferFull();

    return 0;
}