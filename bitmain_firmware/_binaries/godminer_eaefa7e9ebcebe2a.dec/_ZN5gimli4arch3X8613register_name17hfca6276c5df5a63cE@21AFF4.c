char *__fastcall gimli::arch::X86::register_name(unsigned __int16 a1)
{
  if ( a1 > 0x5Eu )
    return 0;
  else
    return off_2E2470[(__int16)a1];
}
