int __fastcall core::num::fmt::Part::len(int a1)
{
  int result; // r0
  unsigned int v2; // r1

  if ( !*(_WORD *)a1 )
    return *(_DWORD *)(a1 + 4);
  if ( *(_WORD *)a1 != 1 )
    return *(_DWORD *)(a1 + 8);
  v2 = *(unsigned __int16 *)(a1 + 2);
  if ( v2 >= 0x3E8 )
  {
    result = 5;
    if ( v2 < 0x2710 )
      return 4;
  }
  else
  {
    result = 1;
    if ( v2 >= 0xA )
    {
      result = 3;
      if ( v2 < 0x64 )
        return 2;
    }
  }
  return result;
}
