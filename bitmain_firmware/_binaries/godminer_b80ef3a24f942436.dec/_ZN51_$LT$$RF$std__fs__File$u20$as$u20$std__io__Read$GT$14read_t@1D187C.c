int __fastcall <&std::fs::File as std::io::Read>::read_to_string(int *a1, int **a2, unsigned int *a3)
{
  int *v3; // r7
  unsigned int v6; // r2
  unsigned int v7; // r5
  unsigned int v8; // r7
  int v9; // r1
  int result; // r0
  bool v11; // zf
  _DWORD v12[3]; // [sp+0h] [bp-18h] BYREF
  _DWORD v13[3]; // [sp+Ch] [bp-Ch] BYREF

  v3 = *a2;
  v6 = sub_1D12FC(*a2);
  v7 = a3[2];
  if ( *a3 - v7 < v6 )
  {
    sub_79590(a3, a3[2], v6);
    v7 = a3[2];
  }
  sub_1D9C44(v12, v3, a3);
  v8 = a3[2];
  if ( v8 < v7 )
    core::slice::index::slice_start_index_len_fail();
  core::str::converts::from_utf8((int)v13, a3[1] + v7, v8 - v7);
  v9 = v12[0];
  result = v12[1];
  if ( v13[0] )
  {
    v11 = LOBYTE(v12[0]) == 4;
    if ( LOBYTE(v12[0]) == 4 )
    {
      result = 1146948;
      v9 = 2;
    }
    *a1 = v9;
    if ( v11 )
      result += 1906964;
    a1[1] = result;
    a3[2] = v7;
  }
  else
  {
    *a1 = v12[0];
    a1[1] = result;
    a3[2] = v8;
  }
  return result;
}
