void *__fastcall std::fs::File::metadata(_DWORD *a1, int *a2)
{
  unsigned __int8 v2; // r9
  int v4; // r5
  int v5; // r7
  int v6; // r0
  int v7; // r6
  void *result; // r0
  _BYTE v9[168]; // [sp+0h] [bp-1C8h] BYREF
  _BYTE v10[184]; // [sp+A8h] [bp-120h] BYREF
  _BYTE s[104]; // [sp+160h] [bp-68h] BYREF

  sub_1E1EF0((int)v10, *a2, (int)&unk_28F5EC, 4096);
  v5 = *(_DWORD *)&v10[4];
  v4 = *(_DWORD *)v10;
  if ( *(_QWORD *)v10 == 3 )
  {
    v4 = 0;
    memset(s, 0, sizeof(s));
    if ( sub_25CCD4() != -1 )
    {
      memcpy(&v10[64], s, 0x68u);
      memcpy(v9, v10, sizeof(v9));
      v5 = 0;
      v6 = 0;
      v7 = 0;
LABEL_5:
      a1[2] = v2 | (v6 << 8);
      *a1 = v4;
      a1[1] = v5;
      a1[3] = v7;
      return memcpy(a1 + 4, v9, 0xA8u);
    }
    v7 = *_errno_location();
    v2 = 0;
    v6 = 0;
  }
  else
  {
    v7 = *(_DWORD *)&v10[12];
    v2 = v10[8];
    memcpy(v9, &v10[16], sizeof(v9));
    v6 = *(__int64 *)&v10[8] >> 8;
    if ( *(_QWORD *)v10 != 2 )
      goto LABEL_5;
  }
  result = (void *)(v2 | (v6 << 8));
  *a1 = 2;
  a1[1] = 0;
  a1[2] = result;
  a1[3] = v7;
  return result;
}
