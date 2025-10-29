bool __fastcall sub_1B0A70(int a1, unsigned int a2)
{
  unsigned int v3; // r3
  int v4; // r0
  int v5; // r5
  int v6; // r7
  int v7; // r6
  int buf; // [sp+4h] [bp-Ch] BYREF
  _DWORD v10[2]; // [sp+8h] [bp-8h] BYREF

  buf = 0;
  if ( a2 < 0x80 )
  {
    v3 = 1;
    LOBYTE(buf) = a2;
    goto LABEL_9;
  }
  if ( a2 >= 0x800 )
  {
    if ( a2 < 0x10000 )
    {
      BYTE2(buf) = a2 & 0x3F | 0x80;
      LOBYTE(buf) = (a2 >> 12) | 0xE0;
      BYTE1(buf) = (a2 >> 6) & 0x3F | 0x80;
      v3 = 3;
      goto LABEL_9;
    }
    HIBYTE(buf) = a2 & 0x3F | 0x80;
    BYTE2(buf) = (a2 >> 6) & 0x3F | 0x80;
    v3 = 4;
    BYTE1(buf) = (a2 >> 12) & 0x3F | 0x80;
    LOBYTE(v4) = (a2 >> 18) & 7 | 0xF0;
  }
  else
  {
    v3 = 2;
    BYTE1(buf) = a2 & 0x3F | 0x80;
    v4 = (a2 >> 6) | 0xC0;
  }
  LOBYTE(buf) = v4;
LABEL_9:
  <std::io::stdio::StderrLock as std::io::Write>::write_all((int)v10, *(_DWORD **)(a1 + 8), (char *)&buf, v3);
  v5 = LOBYTE(v10[0]);
  if ( LOBYTE(v10[0]) != 4 )
  {
    v6 = v10[0];
    v7 = v10[1];
    if ( *(_BYTE *)a1 != 4 )
      sub_1B21B8(a1);
    *(_DWORD *)a1 = v6;
    *(_DWORD *)(a1 + 4) = v7;
  }
  return v5 != 4;
}
