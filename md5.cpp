#include <iostream>
#include <string>
#include "Poco/MD5Engine.h"

using namespace Poco;

int main(){
    MD5Engine md5;
    md5.update("Hello World");
    std::string md5string = DigestEngine::digestToHex(md5.digest());
    std::cout<< "MD5= " << md5string << "\n";
}
