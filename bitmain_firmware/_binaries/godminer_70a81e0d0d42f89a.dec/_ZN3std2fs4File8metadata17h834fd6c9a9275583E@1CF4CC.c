void *__fastcall std::fs::File::metadata(_DWORD *a1, _DWORD *a2)
{
  unsigned __int8 v2; // r9
  int v3; // r6
  int v5; // r5
  int v6; // r7
  int v7; // r0
  int v8; // r6
  void *result; // r0
  _BYTE v10[168]; // [sp+0h] [bp-1C8h] BYREF
  _BYTE v11[184]; // [sp+A8h] [bp-120h] BYREF
  _BYTE s[104]; // [sp+160h] [bp-68h] BYREF

  v3 = *a2;
  sub_1F6414(v11, *a2, &unk_2A67FC, 4096);
  v6 = *(_DWORD *)&v11[4];
  v5 = *(_DWORD *)v11;
  if ( *(_QWORD *)v11 == 3 )
  {
    v5 = 0;
    memset(s, 0, sizeof(s));
    if ( sub_2711FC(v3, s) != -1 )
    {
      memcpy(&v11[64], s, 0x68u);
      memcpy(v10, v11, sizeof(v10));
      v6 = 0;
      v7 = 0;
      v8 = 0;
LABEL_5:
      a1[2] = v2 | (v7 << 8);
      *a1 = v5;
      a1[1] = v6;
      a1[3] = v8;
      return memcpy(a1 + 4, v10, 0xA8u);
    }
    v8 = *_errno_location();
    v2 = 0;
    v7 = 0;
  }
  else
  {
    v8 = *(_DWORD *)&v11[12];
    v2 = v11[8];
    memcpy(v10, &v11[16], sizeof(v10));
    v7 = *(__int64 *)&v11[8] >> 8;
    if ( *(_QWORD *)v11 != 2 )
      goto LABEL_5;
  }
  result = (void *)(v2 | (v7 << 8));
  *a1 = 2;
  a1[1] = 0;
  a1[2] = result;
  a1[3] = v8;
  return result;
}
