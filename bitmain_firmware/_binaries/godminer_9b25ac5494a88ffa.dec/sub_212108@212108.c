unsigned int __fastcall sub_212108(unsigned int *a1, int a2)
{
  unsigned int v2; // r5
  unsigned int *v3; // r4
  unsigned int v4; // r0
  int v5; // r1
  unsigned int v6; // r3
  unsigned int result; // r0
  _DWORD v8[2]; // [sp+0h] [bp-18h] BYREF
  int v9; // [sp+8h] [bp-10h]
  _DWORD v10[2]; // [sp+Ch] [bp-Ch] BYREF
  int v11; // [sp+14h] [bp-4h]

  v2 = a2 + 1;
  if ( a2 == -1 )
    goto LABEL_14;
  v3 = a1;
  v4 = *a1;
  v5 = 0;
  if ( v2 < 2 * v4 )
    v2 = 2 * v4;
  if ( v2 <= 4 )
    v2 = 4;
  if ( v2 < 0x8000000 )
    v5 = 1;
  if ( v4 )
  {
    v11 = 8;
    v6 = v3[1];
    v10[1] = 16 * v4;
    v10[0] = v6;
  }
  else
  {
    v11 = 0;
  }
  sub_211F84(v8, 16 * v2, 8 * v5, (int)v10);
  a1 = (unsigned int *)v8[0];
  if ( v8[0] )
  {
    a2 = v9;
    if ( v9 )
      alloc::alloc::handle_alloc_error();
LABEL_14:
    alloc::raw_vec::capacity_overflow(a1, a2);
  }
  result = v8[1];
  *v3 = v2;
  v3[1] = result;
  return result;
}
