#include <iostream>
#include <Poco/Crypto/RSAKey.h>

int main()
{
  std::cout << "Generating a new RSA Key Pair" << std::endl;
  Poco::Crypto::RSAKey rsaKey{Poco::Crypto::RSAKey::KL_2048, Poco::Crypto::RSAKey::EXP_LARGE};
  rsaKey.save(&std::cout, &std::cout);
  return 0;
}