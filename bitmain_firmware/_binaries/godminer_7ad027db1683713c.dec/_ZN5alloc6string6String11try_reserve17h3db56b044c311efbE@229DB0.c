unsigned int __fastcall alloc::string::String::try_reserve(unsigned int *a1, unsigned int a2)
{
  unsigned int v2; // r5
  int v4; // r0
  unsigned int v5; // r2
  unsigned int v7; // r0
  int v8; // [sp+0h] [bp-18h] BYREF
  __int64 v9; // [sp+4h] [bp-14h]
  _DWORD v10[2]; // [sp+Ch] [bp-Ch] BYREF
  int v11; // [sp+14h] [bp-4h]

  v4 = *a1;
  v5 = a1[2];
  if ( v4 - v5 < a2 )
  {
    v2 = v5 + a2;
    if ( __CFADD__(v5, a2) )
      return v5 + a2;
    if ( v2 < 2 * v4 )
      v2 = 2 * v4;
    if ( v2 <= 8 )
      v2 = 8;
    if ( v4 )
    {
      v10[1] = v4;
      v11 = 1;
      v10[0] = a1[1];
    }
    else
    {
      v11 = 0;
    }
    sub_227858(&v8, v2, (v2 & 0x80000000) == 0, (int)v10);
    if ( v8 )
      return v9;
    v7 = v9;
    *a1 = v2;
    a1[1] = v7;
  }
  return v2;
}
