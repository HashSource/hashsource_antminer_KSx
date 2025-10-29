char *__fastcall gimli::arch::X86_64::register_name(__int16 a1)
{
  if ( (unsigned __int16)a1 > 0x7Du )
    return 0;
  else
    return off_2ED5EC[a1];
}
