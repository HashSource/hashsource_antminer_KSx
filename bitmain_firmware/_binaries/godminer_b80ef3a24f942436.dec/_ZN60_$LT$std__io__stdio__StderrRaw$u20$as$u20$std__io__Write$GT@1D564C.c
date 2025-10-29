int __fastcall <std::io::stdio::StderrRaw as std::io::Write>::write_all_vectored(
        int a1,
        int a2,
        int a3,
        unsigned int a4)
{
  bool v5; // zf
  int result; // r0
  int v7; // r1
  int v8; // [sp+0h] [bp-8h] BYREF
  int v9; // [sp+4h] [bp-4h]

  sub_1DA318(&v8, a2, a3, a4);
  v5 = (unsigned __int8)v8 == 0;
  if ( !(_BYTE)v8 )
    v5 = v9 == 9;
  if ( v5 )
  {
    *(_BYTE *)a1 = 4;
    return 4;
  }
  else
  {
    result = v8;
    v7 = v9;
    *(_DWORD *)a1 = v8;
    *(_DWORD *)(a1 + 4) = v7;
  }
  return result;
}
