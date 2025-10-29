unsigned int __fastcall sub_7995C(unsigned int *a1, int a2, int a3)
{
  unsigned int v3; // r5
  unsigned int v5; // r0
  int v6; // r1
  unsigned int v7; // r3
  unsigned int result; // r0
  int v9; // [sp+0h] [bp-18h] BYREF
  unsigned int v10; // [sp+4h] [bp-14h]
  int v11; // [sp+8h] [bp-10h]
  unsigned int v12; // [sp+Ch] [bp-Ch]
  int v13; // [sp+10h] [bp-8h]
  int v14; // [sp+14h] [bp-4h]

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
    v14 = 4;
    v7 = a1[1];
    v13 = 32 * v5;
    v12 = v7;
  }
  else
  {
    v14 = 0;
  }
  sub_1B60C0((int)&v9, 32 * v3, 4 * v6);
  if ( v9 )
  {
    if ( v11 )
      alloc::alloc::handle_alloc_error(v10);
LABEL_14:
    alloc::raw_vec::capacity_overflow();
  }
  result = v10;
  *a1 = v3;
  a1[1] = result;
  return result;
}
