int __fastcall <std::io::stdio::StdinLock as std::io::BufRead>::read_line(int *a1, int a2, unsigned int *a3)
{
  unsigned int v4; // r5
  unsigned int v6; // r7
  int v7; // r1
  int result; // r0
  bool v9; // zf
  _DWORD v10[3]; // [sp+0h] [bp-18h] BYREF
  _DWORD v11[3]; // [sp+Ch] [bp-Ch] BYREF

  v4 = a3[2];
  sub_1C4AC8(v10, (_DWORD *)(*(_DWORD *)a2 + 8), 0xAu, a3);
  v6 = a3[2];
  if ( v6 < v4 )
    core::slice::index::slice_start_index_len_fail(v4, a3[2], (int)&off_2C9BB4);
  core::str::converts::from_utf8((int)v11, a3[1] + v4, v6 - v4);
  v7 = v10[0];
  result = v10[1];
  if ( v11[0] )
  {
    v9 = LOBYTE(v10[0]) == 4;
    if ( LOBYTE(v10[0]) == 4 )
    {
      result = 1085472;
      v7 = 2;
    }
    *a1 = v7;
    if ( v9 )
      result += 1837368;
    a1[1] = result;
    a3[2] = v4;
  }
  else
  {
    *a1 = v10[0];
    a1[1] = result;
    a3[2] = v6;
  }
  return result;
}
