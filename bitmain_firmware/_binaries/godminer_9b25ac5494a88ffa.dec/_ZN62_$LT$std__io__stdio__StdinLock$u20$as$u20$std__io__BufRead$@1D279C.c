int __fastcall <std::io::stdio::StdinLock as std::io::BufRead>::read_line(int *a1, _DWORD *a2, int a3)
{
  unsigned int v4; // r5
  unsigned int v6; // r7
  int v7; // r1
  int result; // r0
  bool v9; // zf
  _DWORD v10[3]; // [sp+0h] [bp-18h] BYREF
  _DWORD v11[3]; // [sp+Ch] [bp-Ch] BYREF

  v4 = *(_DWORD *)(a3 + 8);
  sub_1D69AC(v10, *a2 + 8);
  v6 = *(_DWORD *)(a3 + 8);
  if ( v6 < v4 )
    core::slice::index::slice_start_index_len_fail();
  core::str::converts::from_utf8(v11, *(_DWORD *)(a3 + 4) + v4);
  v7 = v10[0];
  result = v10[1];
  if ( v11[0] )
  {
    v9 = LOBYTE(v10[0]) == 4;
    if ( LOBYTE(v10[0]) == 4 )
    {
      result = 1093948;
      v7 = 2;
    }
    *a1 = v7;
    if ( v9 )
      result += 1910812;
    a1[1] = result;
    *(_DWORD *)(a3 + 8) = v4;
  }
  else
  {
    *a1 = v10[0];
    a1[1] = result;
    *(_DWORD *)(a3 + 8) = v6;
  }
  return result;
}
