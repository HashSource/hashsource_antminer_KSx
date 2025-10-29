size_t __fastcall sub_228924(size_t *a1, int a2)
{
  size_t v2; // r5
  size_t *v3; // r4
  size_t v4; // r0
  size_t result; // r0
  _DWORD v6[2]; // [sp+0h] [bp-18h] BYREF
  int v7; // [sp+8h] [bp-10h]
  size_t v8; // [sp+Ch] [bp-Ch]
  size_t v9; // [sp+10h] [bp-8h]
  int v10; // [sp+14h] [bp-4h]

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
    v9 = v4;
    v10 = 1;
    v8 = v3[1];
  }
  else
  {
    v10 = 0;
  }
  sub_2289C8((int)v6, v2);
  a1 = (size_t *)v6[0];
  if ( v6[0] )
  {
    a2 = v7;
    if ( v7 )
      alloc::alloc::handle_alloc_error();
LABEL_12:
    alloc::raw_vec::capacity_overflow(a1, a2);
  }
  result = v6[1];
  *v3 = v2;
  v3[1] = result;
  return result;
}
