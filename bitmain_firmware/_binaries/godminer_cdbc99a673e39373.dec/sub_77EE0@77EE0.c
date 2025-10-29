size_t __fastcall sub_77EE0(size_t *a1, int a2, int a3)
{
  size_t v3; // r5
  signed int v5; // r0
  _BOOL4 v6; // r0
  size_t result; // r0
  int v8; // [sp+0h] [bp-18h] BYREF
  size_t v9; // [sp+4h] [bp-14h]
  int v10; // [sp+8h] [bp-10h]
  size_t v11; // [sp+Ch] [bp-Ch]
  signed int v12; // [sp+10h] [bp-8h]
  _BOOL4 v13; // [sp+14h] [bp-4h]

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
    v12 = v5;
    v6 = v5 >= 0;
    v11 = a1[1];
  }
  else
  {
    v6 = 0;
  }
  v13 = v6;
  sub_1A4F6C((int)&v8, v3, (v3 & 0x80000000) == 0);
  if ( v8 )
  {
    if ( v10 )
      alloc::alloc::handle_alloc_error(v9);
LABEL_12:
    alloc::raw_vec::capacity_overflow();
  }
  result = v9;
  *a1 = v3;
  a1[1] = result;
  return result;
}
