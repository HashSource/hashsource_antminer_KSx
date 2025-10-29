void __fastcall std::thread::park_timeout_ms(unsigned int a1)
{
  std::thread::park_timeout(
    a1 / 0x3E8,
    0,
    1000000 * (a1 % 0x3E8)
  - 1000000000
  * ((unsigned int)((((1000000 * (a1 % 0x3E8)) >> 9)
                   * (unsigned __int64)(unsigned int)"FromBytesWithNulErrorKind$u20$as$u20$core..fmt..Debug$GT$3fmt17h177e3efef8767ab6E") >> 32) >> 7));
}
