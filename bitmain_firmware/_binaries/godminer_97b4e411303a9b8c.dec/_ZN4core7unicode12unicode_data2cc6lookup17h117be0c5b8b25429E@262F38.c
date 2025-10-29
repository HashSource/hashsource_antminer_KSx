bool __fastcall core::unicode::unicode_data::cc::lookup(unsigned int a1)
{
  if ( a1 << 11 >= 0x88050000 )
    core::panicking::panic_bounds_check(1, 1, (int)&off_2E5BE0);
  return a1 < 0x20 || a1 - 127 < 0x21;
}
