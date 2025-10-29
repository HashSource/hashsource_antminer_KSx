unsigned int __fastcall sub_79954(unsigned int *a1, int a2, int a3)
{
  unsigned int v3; // r5
  unsigned int v5; // r0
  unsigned int result; // r0
  int v7; // [sp+0h] [bp-18h] BYREF
  unsigned int v8; // [sp+4h] [bp-14h]
  int v9; // [sp+8h] [bp-10h]
  unsigned int v10; // [sp+Ch] [bp-Ch]
  int v11; // [sp+10h] [bp-8h]
  int v12; // [sp+14h] [bp-4h]

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
    v10 = a1[1];
    v12 = 8;
    v11 = 24 * v5;
  }
  else
  {
    v12 = 0;
  }
  sub_1B6970((int)&v7, 24 * v3, 8 * (v3 <= 0x5555555));
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
