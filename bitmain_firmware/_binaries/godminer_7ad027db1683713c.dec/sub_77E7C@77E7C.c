unsigned int __fastcall sub_77E7C(unsigned int *a1, int a2, int a3)
{
  unsigned int v3; // r5
  int v5; // r0
  unsigned int result; // r0
  _DWORD v7[3]; // [sp+0h] [bp-18h] BYREF
  _DWORD v8[2]; // [sp+Ch] [bp-Ch] BYREF
  int v9; // [sp+14h] [bp-4h]

  v3 = a2 + a3;
  if ( __CFADD__(a2, a3) )
    goto LABEL_12;
  v5 = *a1;
  if ( v3 < 2 * v5 )
    v3 = 2 * v5;
  if ( v3 <= 4 )
    v3 = 4;
  if ( v5 )
  {
    v8[0] = a1[1];
    v9 = 8;
    v8[1] = 24 * v5;
  }
  else
  {
    v9 = 0;
  }
  sub_1A3DFC(v7, 24 * v3, 8 * (v3 <= 0x5555555), (int)v8);
  if ( v7[0] )
  {
    if ( v7[2] )
      alloc::alloc::handle_alloc_error();
LABEL_12:
    alloc::raw_vec::capacity_overflow();
  }
  result = v7[1];
  *a1 = v3;
  a1[1] = result;
  return result;
}
