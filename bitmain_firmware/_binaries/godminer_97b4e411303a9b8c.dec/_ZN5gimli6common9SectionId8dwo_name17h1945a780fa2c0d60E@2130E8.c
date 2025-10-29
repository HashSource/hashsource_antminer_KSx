int __fastcall gimli::common::SectionId::dwo_name(unsigned __int8 a1)
{
  unsigned int v1; // r1
  int result; // r0

  v1 = a1;
  result = 0;
  if ( v1 < 0x16 && ((0x3E2D89u >> v1) & 1) != 0 )
    return (int)*(&off_2E3014 + (char)a1);
  return result;
}
