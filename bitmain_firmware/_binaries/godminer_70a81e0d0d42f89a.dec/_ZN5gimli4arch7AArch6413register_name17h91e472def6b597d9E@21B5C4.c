int __fastcall gimli::arch::AArch64::register_name(unsigned __int16 a1)
{
  if ( a1 > 0x5Fu )
    return 0;
  else
    return (int)*(&off_2E41F0 + (__int16)a1);
}
