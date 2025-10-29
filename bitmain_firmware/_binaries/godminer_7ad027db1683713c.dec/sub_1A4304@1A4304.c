unsigned int __fastcall sub_1A4304(unsigned int *a1, int a2)
{
  unsigned int v2; // r5
  int v4; // r0
  unsigned int v5; // r3
  unsigned int result; // r0
  _DWORD v7[3]; // [sp+0h] [bp-18h] BYREF
  _DWORD v8[2]; // [sp+Ch] [bp-Ch] BYREF
  int v9; // [sp+14h] [bp-4h]

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
    v9 = 8;
    v8[0] = v5;
    v8[1] = 336 * v4;
  }
  else
  {
    v9 = 0;
  }
  sub_1A3DFC(v7, 336 * v2, 8 * (v2 <= 0x618618), (int)v8);
  if ( v7[0] )
  {
    if ( v7[2] )
      alloc::alloc::handle_alloc_error();
LABEL_12:
    alloc::raw_vec::capacity_overflow();
  }
  result = v7[1];
  *a1 = v2;
  a1[1] = result;
  return result;
}
