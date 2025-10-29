int __fastcall gimli::arch::AArch64::register_name(__int16 a1)
{
  if ( (unsigned __int16)a1 > 0x5Fu )
    return 0;
  else
    return (int)*(&off_2ED1F0 + a1);
}
