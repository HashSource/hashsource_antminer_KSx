void *__fastcall gimli::read::abbrev::Abbreviation::new(int a1, __int64 a2, __int16 a3, char a4, void *src)
{
  void *result; // r0
  __int64 v9; // [sp+0h] [bp-20h] BYREF
  _DWORD v10[6]; // [sp+8h] [bp-18h] BYREF

  v9 = a2;
  if ( !a2 )
  {
    v10[2] = 0;
    sub_7D478((int)&v9, v10);
  }
  result = memcpy((void *)(a1 + 8), src, 0x58u);
  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 98) = a4;
  *(_WORD *)(a1 + 96) = a3;
  return result;
}
