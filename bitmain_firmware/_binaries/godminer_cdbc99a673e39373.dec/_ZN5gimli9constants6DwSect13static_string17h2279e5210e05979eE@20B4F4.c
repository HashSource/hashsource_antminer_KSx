int __fastcall gimli::constants::DwSect::static_string(_DWORD *a1)
{
  unsigned int v1; // r2
  int result; // r0

  v1 = *a1 - 1;
  result = 0;
  if ( v1 < 8 && ((0xFDu >> v1) & 1) != 0 )
    return (int)*(&off_2CE7E4 + v1);
  return result;
}
