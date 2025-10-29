bool __fastcall gimli::constants::DwEhPe::is_valid_encoding(unsigned __int8 a1)
{
  int v1; // r1
  _BOOL4 result; // r0

  v1 = a1;
  result = 1;
  if ( v1 != 255 )
  {
    result = 0;
    if ( (v1 & 0xFu) <= 0xC && ((1 << (v1 & 0xF)) & 0x1E1F) != 0 )
      return (v1 & 0x60) != 96;
  }
  return result;
}
