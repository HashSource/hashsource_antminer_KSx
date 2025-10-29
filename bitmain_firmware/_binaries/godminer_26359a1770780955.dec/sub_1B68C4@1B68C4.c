unsigned int __fastcall sub_1B68C4(unsigned int *a1, int a2)
{
  unsigned int v2; // r5
  signed int v4; // r0
  _BOOL4 v5; // r0
  unsigned int result; // r0
  _DWORD v7[3]; // [sp+0h] [bp-18h] BYREF
  _DWORD v8[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = a2 + 1;
  if ( a2 == -1 )
    goto LABEL_12;
  v4 = *a1;
  if ( v2 < 2 * v4 )
    v2 = 2 * v4;
  if ( v2 <= 8 )
    v2 = 8;
  if ( v4 )
  {
    v8[1] = v4;
    v5 = v4 >= 0;
    v8[0] = a1[1];
  }
  else
  {
    v5 = 0;
  }
  v8[2] = v5;
  sub_1B60C0(v7, v2, (v2 & 0x80000000) == 0, (int)v8);
  if ( v7[0] )
  {
    if ( v7[2] )
      alloc::alloc::handle_alloc_error();
LABEL_12:
    alloc::raw_vec::capacity_overflow();
  }
  result = v7[1];
  *a1 = v2;
  a1[1] = result;
  return result;
}
