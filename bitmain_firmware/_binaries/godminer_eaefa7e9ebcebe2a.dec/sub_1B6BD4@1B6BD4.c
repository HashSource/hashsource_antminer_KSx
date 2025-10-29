unsigned int __fastcall sub_1B6BD4(unsigned int *a1, int a2)
{
  unsigned int v2; // r5
  unsigned int v4; // r0
  unsigned int result; // r0
  _DWORD v6[3]; // [sp+0h] [bp-18h] BYREF
  _DWORD v7[2]; // [sp+Ch] [bp-Ch] BYREF
  int v8; // [sp+14h] [bp-4h]

  v2 = a2 + 1;
  if ( a2 == -1 )
    goto LABEL_12;
  v4 = *a1;
  if ( v2 < 2 * v4 )
    v2 = 2 * v4;
  if ( v2 <= 4 )
    v2 = 4;
  if ( v4 )
  {
    v7[0] = a1[1];
    v8 = 8;
    v7[1] = 40 * v4;
  }
  else
  {
    v8 = 0;
  }
  sub_1B61C0(v6, 40 * v2, 8 * (v2 <= 0x3333333), (int)v7);
  if ( v6[0] )
  {
    if ( v6[2] )
      alloc::alloc::handle_alloc_error();
LABEL_12:
    alloc::raw_vec::capacity_overflow();
  }
  result = v6[1];
  *a1 = v2;
  a1[1] = result;
  return result;
}
