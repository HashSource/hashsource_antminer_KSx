unsigned int __fastcall sub_7BB70(unsigned int *a1, int a2, int a3)
{
  unsigned int v3; // r5
  int v5; // r0
  _BOOL4 v6; // r0
  unsigned int result; // r0
  _DWORD v8[3]; // [sp+0h] [bp-18h] BYREF
  _DWORD v9[3]; // [sp+Ch] [bp-Ch] BYREF

  v3 = a2 + a3;
  if ( __CFADD__(a2, a3) )
    goto LABEL_12;
  v5 = *a1;
  if ( v3 < 2 * v5 )
    v3 = 2 * v5;
  if ( v3 <= 8 )
    v3 = 8;
  if ( v5 )
  {
    v9[1] = v5;
    v6 = v5 >= 0;
    v9[0] = a1[1];
  }
  else
  {
    v6 = 0;
  }
  v9[2] = v6;
  sub_21CF3C(v8, v3, (v3 & 0x80000000) == 0, (int)v9);
  if ( v8[0] )
  {
    if ( v8[2] )
      alloc::alloc::handle_alloc_error();
LABEL_12:
    alloc::raw_vec::capacity_overflow();
  }
  result = v8[1];
  *a1 = v3;
  a1[1] = result;
  return result;
}
