unsigned int __fastcall sub_1A5034(unsigned int *a1, int a2)
{
  unsigned int v2; // r5
  unsigned int v4; // r0
  int v5; // r1
  unsigned int v6; // r3
  unsigned int result; // r0
  _DWORD v8[3]; // [sp+0h] [bp-18h] BYREF
  _DWORD v9[2]; // [sp+Ch] [bp-Ch] BYREF
  int v10; // [sp+14h] [bp-4h]

  v2 = a2 + 1;
  if ( a2 == -1 )
    goto LABEL_14;
  v4 = *a1;
  v5 = 0;
  if ( v2 < 2 * v4 )
    v2 = 2 * v4;
  if ( v2 <= 4 )
    v2 = 4;
  if ( v2 < 0x10000000 )
    v5 = 1;
  if ( v4 )
  {
    v10 = 4;
    v6 = a1[1];
    v9[1] = 8 * v4;
    v9[0] = v6;
  }
  else
  {
    v10 = 0;
  }
  sub_1A4F6C(v8, 8 * v2, 4 * v5, (int)v9);
  if ( v8[0] )
  {
    if ( v8[2] )
      alloc::alloc::handle_alloc_error();
LABEL_14:
    alloc::raw_vec::capacity_overflow();
  }
  result = v8[1];
  *a1 = v2;
  a1[1] = result;
  return result;
}
