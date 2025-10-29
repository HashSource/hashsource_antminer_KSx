unsigned int __fastcall sub_77F3C(unsigned int *a1, int a2, int a3)
{
  unsigned int v3; // r5
  int v5; // r0
  int v6; // r1
  unsigned int v7; // r3
  unsigned int result; // r0
  _DWORD v9[3]; // [sp+0h] [bp-18h] BYREF
  _DWORD v10[2]; // [sp+Ch] [bp-Ch] BYREF
  int v11; // [sp+14h] [bp-4h]

  v3 = a2 + a3;
  if ( __CFADD__(a2, a3) )
    goto LABEL_14;
  v5 = *a1;
  v6 = 0;
  if ( v3 < 2 * v5 )
    v3 = 2 * v5;
  if ( v3 <= 4 )
    v3 = 4;
  if ( v3 < 0x4000000 )
    v6 = 1;
  if ( v5 )
  {
    v11 = 4;
    v7 = a1[1];
    v10[1] = 32 * v5;
    v10[0] = v7;
  }
  else
  {
    v11 = 0;
  }
  sub_1A3DFC(v9, 32 * v3, 4 * v6, (int)v10);
  if ( v9[0] )
  {
    if ( v9[2] )
      alloc::alloc::handle_alloc_error();
LABEL_14:
    alloc::raw_vec::capacity_overflow();
  }
  result = v9[1];
  *a1 = v3;
  a1[1] = result;
  return result;
}
