char *__fastcall gimli::arch::X86_64::register_name(unsigned __int16 a1)
{
  if ( a1 > 0x7Du )
    return 0;
  else
    return off_2E35EC[(__int16)a1];
}
