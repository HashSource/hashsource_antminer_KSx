unsigned int __fastcall sub_214C2C(unsigned int *a1, int a2)
{
  unsigned int v2; // r5
  unsigned int *v3; // r4
  signed int v4; // r0
  _BOOL4 v5; // r0
  unsigned int result; // r0
  _DWORD v7[2]; // [sp+0h] [bp-18h] BYREF
  int v8; // [sp+8h] [bp-10h]
  _DWORD v9[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = a2 + 1;
  if ( a2 == -1 )
    goto LABEL_12;
  v3 = a1;
  v4 = *a1;
  if ( v2 < 2 * v4 )
    v2 = 2 * v4;
  if ( v2 <= 8 )
    v2 = 8;
  if ( v4 )
  {
    v9[1] = v4;
    v5 = v4 >= 0;
    v9[0] = v3[1];
  }
  else
  {
    v5 = 0;
  }
  v9[2] = v5;
  sub_214B68(v7, v2, (v2 & 0x80000000) == 0, (int)v9);
  a1 = (unsigned int *)v7[0];
  if ( v7[0] )
  {
    a2 = v8;
    if ( v8 )
      alloc::alloc::handle_alloc_error();
LABEL_12:
    alloc::raw_vec::capacity_overflow(a1, a2);
  }
  result = v7[1];
  *v3 = v2;
  v3[1] = result;
  return result;
}
