int __fastcall gimli::arch::RiscV::register_name(__int16 a1)
{
  if ( (unsigned __int16)a1 > 0x3Fu )
    return 0;
  else
    return (int)*(&off_2ED370 + a1);
}
