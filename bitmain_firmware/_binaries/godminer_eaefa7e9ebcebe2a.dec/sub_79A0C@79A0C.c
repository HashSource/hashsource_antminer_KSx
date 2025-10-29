unsigned int __fastcall sub_79A0C(unsigned int *a1, int a2)
{
  unsigned int v2; // r5
  unsigned int v4; // r0
  unsigned int v5; // r3
  unsigned int result; // r0
  int v7; // [sp+0h] [bp-18h] BYREF
  unsigned int v8; // [sp+4h] [bp-14h]
  int v9; // [sp+8h] [bp-10h]
  unsigned int v10; // [sp+Ch] [bp-Ch]
  int v11; // [sp+10h] [bp-8h]
  int v12; // [sp+14h] [bp-4h]

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
    v5 = a1[1];
    v12 = 8;
    v10 = v5;
    v11 = 152 * v4;
  }
  else
  {
    v12 = 0;
  }
  sub_1B61C0((int)&v7, 152 * v2, 8 * (v2 <= 0xD79435));
  if ( v7 )
  {
    if ( v9 )
      alloc::alloc::handle_alloc_error(v8);
LABEL_12:
    alloc::raw_vec::capacity_overflow();
  }
  result = v8;
  *a1 = v2;
  a1[1] = result;
  return result;
}
