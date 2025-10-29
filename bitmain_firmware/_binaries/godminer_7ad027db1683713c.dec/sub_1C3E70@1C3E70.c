int __fastcall sub_1C3E70(int *a1, int a2, unsigned int *a3)
{
  unsigned int v3; // r5
  unsigned int v6; // r7
  int v7; // r1
  int result; // r0
  bool v9; // zf
  _DWORD v10[3]; // [sp+0h] [bp-18h] BYREF
  _DWORD v11[3]; // [sp+Ch] [bp-Ch] BYREF

  v3 = a3[2];
  sub_1C3A18(v10, a2, a3);
  v6 = a3[2];
  if ( v6 < v3 )
    core::slice::index::slice_start_index_len_fail(v3, a3[2], (int)&off_2C9BB4);
  core::str::converts::from_utf8((int)v11, a3[1] + v3, v6 - v3);
  v7 = v10[0];
  result = v10[1];
  if ( v11[0] )
  {
    v9 = LOBYTE(v10[0]) == 4;
    if ( LOBYTE(v10[0]) == 4 )
    {
      result = 1071736;
      v7 = 2;
    }
    *a1 = v7;
    if ( v9 )
      result += 1851104;
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
