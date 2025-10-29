char *__fastcall gimli::arch::X86::register_name(__int16 a1)
{
  if ( (unsigned __int16)a1 > 0x5Eu )
    return 0;
  else
    return off_2ED470[a1];
}
