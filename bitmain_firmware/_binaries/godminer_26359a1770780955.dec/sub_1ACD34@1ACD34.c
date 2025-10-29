bool __fastcall sub_1ACD34(int a1, unsigned int a2)
{
  int v3; // r0
  int v4; // r5
  int v5; // r7
  int v6; // r6
  int buf; // [sp+4h] [bp-Ch] BYREF
  _DWORD v9[2]; // [sp+8h] [bp-8h] BYREF

  buf = 0;
  if ( a2 < 0x80 )
  {
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
      goto LABEL_9;
    }
    HIBYTE(buf) = a2 & 0x3F | 0x80;
    BYTE2(buf) = (a2 >> 6) & 0x3F | 0x80;
    BYTE1(buf) = (a2 >> 12) & 0x3F | 0x80;
    LOBYTE(v3) = (a2 >> 18) & 7 | 0xF0;
  }
  else
  {
    BYTE1(buf) = a2 & 0x3F | 0x80;
    v3 = (a2 >> 6) | 0xC0;
  }
  LOBYTE(buf) = v3;
LABEL_9:
  <std::io::stdio::StderrLock as std::io::Write>::write_all((int)v9, *(_DWORD *)(a1 + 8), &buf);
  v4 = LOBYTE(v9[0]);
  if ( LOBYTE(v9[0]) != 4 )
  {
    v5 = v9[0];
    v6 = v9[1];
    if ( *(_BYTE *)a1 != 4 )
      sub_1AE47C(a1);
    *(_DWORD *)a1 = v5;
    *(_DWORD *)(a1 + 4) = v6;
  }
  return v4 != 4;
}
