int __fastcall sub_1D6134(int *a1, int a2, size_t *a3)
{
  size_t v3; // r5
  size_t v6; // r7
  int v7; // r1
  int result; // r0
  bool v9; // zf
  _DWORD v10[3]; // [sp+0h] [bp-18h] BYREF
  _DWORD v11[3]; // [sp+Ch] [bp-Ch] BYREF

  v3 = a3[2];
  sub_1D5CDC(v10, a2, a3);
  v6 = a3[2];
  if ( v6 < v3 )
    core::slice::index::slice_start_index_len_fail();
  core::str::converts::from_utf8(v11, a3[1] + v3);
  v7 = v10[0];
  result = v10[1];
  if ( v11[0] )
  {
    v9 = LOBYTE(v10[0]) == 4;
    if ( LOBYTE(v10[0]) == 4 )
    {
      result = 1083316;
      v7 = 2;
    }
    *a1 = v7;
    if ( v9 )
      result += 1925540;
    a1[1] = result;
    a3[2] = v3;
  }
  else
  {
    *a1 = v10[0];
    a1[1] = result;
    a3[2] = v6;
  }
  return result;
}
