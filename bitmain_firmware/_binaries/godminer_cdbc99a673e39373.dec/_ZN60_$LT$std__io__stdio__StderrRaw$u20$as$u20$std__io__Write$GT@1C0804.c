int __fastcall <std::io::stdio::StderrRaw as std::io::Write>::write_fmt(int a1, int a2, _DWORD *a3)
{
  int v3; // r4
  int v4; // r5
  int v5; // r6
  int v6; // r7
  int v7; // lr
  bool v9; // zf
  int result; // r0
  int v11; // r1
  int v12; // [sp+0h] [bp-20h] BYREF
  int v13; // [sp+4h] [bp-1Ch]
  _DWORD v14[6]; // [sp+8h] [bp-18h] BYREF

  v3 = a3[1];
  v4 = a3[2];
  v5 = a3[3];
  v6 = a3[4];
  v7 = a3[5];
  v14[0] = *a3;
  v14[1] = v3;
  v14[2] = v4;
  v14[3] = v5;
  v14[4] = v6;
  v14[5] = v7;
  sub_1C56B0(&v12, a2, v14);
  v9 = (unsigned __int8)v12 == 0;
  if ( !(_BYTE)v12 )
    v9 = v13 == 9;
  if ( v9 )
  {
    *(_BYTE *)a1 = 4;
    return 4;
  }
  else
  {
    result = v12;
    v11 = v13;
    *(_DWORD *)a1 = v12;
    *(_DWORD *)(a1 + 4) = v11;
  }
  return result;
}
