int __fastcall <std::io::stdio::Stdout as std::io::Write>::write_fmt(int a1, int a2, _DWORD *a3)
{
  int v3; // r4
  int v4; // r5
  int v5; // r6
  int v6; // r7
  int v7; // lr
  int v9; // [sp+4h] [bp-1Ch] BYREF
  _DWORD v10[6]; // [sp+8h] [bp-18h] BYREF

  v9 = a2;
  v3 = a3[1];
  v4 = a3[2];
  v5 = a3[3];
  v6 = a3[4];
  v7 = a3[5];
  v10[0] = *a3;
  v10[1] = v3;
  v10[2] = v4;
  v10[3] = v5;
  v10[4] = v6;
  v10[5] = v7;
  return <&std::io::stdio::Stdout as std::io::Write>::write_fmt(a1, &v9, v10);
}
