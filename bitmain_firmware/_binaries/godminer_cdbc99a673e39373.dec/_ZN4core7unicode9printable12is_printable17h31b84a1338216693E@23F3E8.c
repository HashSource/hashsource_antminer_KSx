int __fastcall core::unicode::printable::is_printable(unsigned int a1)
{
  int v1; // r1

  if ( a1 < 0x20 )
    return 0;
  v1 = 1;
  if ( a1 < 0x7F )
    return v1;
  if ( a1 < 0x10000 )
    return sub_23F288(a1, byte_2A0F9F, 40, (int)&unk_2A0FEF, 0x11Fu, byte_2A110E, 303);
  if ( a1 < 0x20000 )
    return sub_23F288(a1, byte_2A123D, 44, (int)&unk_2A1295, 0xC4u, byte_2A1359, 450);
  if ( a1 - 205744 < (unsigned int)&loc_ADD50
    || a1 - 201547 < 5
    || a1 - 195102 < 0x5E2
    || a1 - 191457 < 0xC1F
    || a1 - 183970 < 0xE
    || (char *)(a1 & 0xFFFFFFFE) == "signal"
    || (unsigned __int32 *)(a1 & 0xFFFFFFE0) == &stru_2A6DC.st_value )
  {
    return 0;
  }
  v1 = 0;
  if ( a1 - 177978 < 6 )
    return v1;
  return a1 - 1114112 < 0xFFFD01F0;
}
