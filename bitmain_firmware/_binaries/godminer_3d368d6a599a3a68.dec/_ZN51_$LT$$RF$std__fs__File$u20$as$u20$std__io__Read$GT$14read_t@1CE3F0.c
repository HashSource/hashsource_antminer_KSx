int __fastcall <&std::fs::File as std::io::Read>::read_to_string(int *a1, _DWORD **a2, size_t *a3)
{
  int v3; // r7
  unsigned int v6; // r2
  size_t v7; // r5
  size_t v8; // r7
  int v9; // r1
  int result; // r0
  bool v11; // zf
  _DWORD v12[3]; // [sp+0h] [bp-18h] BYREF
  int v13[3]; // [sp+Ch] [bp-Ch] BYREF

  v3 = (int)*a2;
  v6 = sub_1CDE70(*a2);
  v7 = a3[2];
  if ( *a3 - v7 < v6 )
  {
    sub_798B0(a3, a3[2], v6);
    v7 = a3[2];
  }
  sub_1D67B8(v12, v3, a3);
  v8 = a3[2];
  if ( v8 < v7 )
    core::slice::index::slice_start_index_len_fail();
  core::str::converts::from_utf8(v13, a3[1] + v7);
  v9 = v12[0];
  result = v12[1];
  if ( v13[0] )
  {
    v11 = LOBYTE(v12[0]) == 4;
    if ( LOBYTE(v12[0]) == 4 )
    {
      result = 1115344;
      v9 = 2;
    }
    *a1 = v9;
    if ( v11 )
      result += 1893512;
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
