size_t __fastcall sub_7D57C(size_t *a1, int a2, int a3)
{
  size_t v3; // r5
  size_t v5; // r0
  size_t result; // r0
  int v7; // [sp+0h] [bp-18h] BYREF
  size_t v8; // [sp+4h] [bp-14h]
  int v9; // [sp+8h] [bp-10h]
  size_t v10; // [sp+Ch] [bp-Ch]
  size_t v11; // [sp+10h] [bp-8h]
  int v12; // [sp+14h] [bp-4h]

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
    v11 = v5;
    v12 = 1;
    v10 = a1[1];
  }
  else
  {
    v12 = 0;
  }
  sub_239740((int)&v7, v3);
  if ( v7 )
  {
    if ( v9 )
      alloc::alloc::handle_alloc_error(v8);
LABEL_12:
    alloc::raw_vec::capacity_overflow();
  }
  result = v8;
  *a1 = v3;
  a1[1] = result;
  return result;
}
