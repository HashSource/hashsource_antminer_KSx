int __fastcall <std::io::stdio::StderrRaw as std::io::Write>::write_all_vectored(int a1)
{
  bool v2; // zf
  int result; // r0
  int v4; // r1
  int v5; // [sp+0h] [bp-8h] BYREF
  int v6; // [sp+4h] [bp-4h]

  sub_1C5488(&v5);
  v2 = (unsigned __int8)v5 == 0;
  if ( !(_BYTE)v5 )
    v2 = v6 == 9;
  if ( v2 )
  {
    *(_BYTE *)a1 = 4;
    return 4;
  }
  else
  {
    result = v5;
    v4 = v6;
    *(_DWORD *)a1 = v5;
    *(_DWORD *)(a1 + 4) = v4;
  }
  return result;
}
