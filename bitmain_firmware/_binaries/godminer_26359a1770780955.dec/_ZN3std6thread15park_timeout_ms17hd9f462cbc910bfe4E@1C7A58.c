int __fastcall std::thread::park_timeout_ms(unsigned int a1)
{
  return std::thread::park_timeout(
           a1 / 0x3E8,
           0,
           1000000 * (a1 % 0x3E8)
         - 1000000000
         * ((unsigned int)((((1000000 * (a1 % 0x3E8)) >> 9) * (unsigned __int64)(unsigned int)"str17h2150493e56166623E") >> 32) >> 7));
}
