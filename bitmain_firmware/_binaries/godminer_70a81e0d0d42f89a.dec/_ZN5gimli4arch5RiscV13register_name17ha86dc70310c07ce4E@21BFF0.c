int __fastcall gimli::arch::RiscV::register_name(unsigned __int16 a1)
{
  if ( a1 > 0x3Fu )
    return 0;
  else
    return (int)*(&off_2E4370 + (__int16)a1);
}
