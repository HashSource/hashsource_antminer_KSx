int __fastcall <std::io::stdio::StdinRaw as std::io::Read>::read_to_string(int *a1, int a2, int a3)
{
  unsigned int v3; // r5
  unsigned int v6; // r7
  int result; // r0
  int v8; // r3
  char **v9; // r2
  bool v10; // zf
  _DWORD v11[3]; // [sp+0h] [bp-18h] BYREF
  _DWORD v12[3]; // [sp+Ch] [bp-Ch] BYREF

  v3 = *(_DWORD *)(a3 + 8);
  sub_1D5A88(v11, a3);
  v6 = *(_DWORD *)(a3 + 8);
  if ( v6 < v3 )
    core::slice::index::slice_start_index_len_fail();
  core::str::converts::from_utf8(v12, *(_DWORD *)(a3 + 4) + v3);
  result = v12[0];
  v8 = v11[0];
  v9 = (char **)v11[1];
  if ( v12[0] )
  {
    result = LOBYTE(v11[0]);
    if ( LOBYTE(v11[0]) == 4 )
    {
      v8 = 2;
      *(_DWORD *)(a3 + 8) = v3;
      v9 = &off_2DE958;
LABEL_9:
      *a1 = v8;
      a1[1] = (int)v9;
      return result;
    }
    v6 = v3;
  }
  v10 = LOBYTE(v11[0]) == 0;
  *(_DWORD *)(a3 + 8) = v6;
  if ( !(_BYTE)v8 )
    v10 = v9 == (char **)9;
  if ( !v10 )
    goto LABEL_9;
  *(_BYTE *)a1 = 4;
  a1[1] = 0;
  return 0;
}
