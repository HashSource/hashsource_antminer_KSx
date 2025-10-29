int __fastcall <std::io::stdio::StdinRaw as std::io::Read>::read_to_end(int a1, int a2, int a3)
{
  bool v4; // zf
  int result; // r0
  int v6; // r1
  int v7; // [sp+0h] [bp-8h] BYREF
  int v8; // [sp+4h] [bp-4h]

  sub_1D6598(&v7, a3);
  v4 = (unsigned __int8)v7 == 0;
  if ( !(_BYTE)v7 )
    v4 = v8 == 9;
  if ( v4 )
  {
    *(_BYTE *)a1 = 4;
    *(_DWORD *)(a1 + 4) = 0;
    return 0;
  }
  else
  {
    result = v7;
    v6 = v8;
    *(_DWORD *)a1 = v7;
    *(_DWORD *)(a1 + 4) = v6;
  }
  return result;
}
