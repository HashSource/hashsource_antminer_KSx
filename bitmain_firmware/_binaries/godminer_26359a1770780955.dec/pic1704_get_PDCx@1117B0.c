int __fastcall pic1704_get_PDCx(char a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int result; // r0
  unsigned __int16 v8; // r3
  unsigned __int16 v9; // r2
  int v10; // [sp+4h] [bp-1Ch] BYREF
  __int16 v11; // [sp+8h] [bp-18h]
  int v12; // [sp+Ch] [bp-14h]
  int v13; // [sp+10h] [bp-10h]
  unsigned __int8 v14; // [sp+14h] [bp-Ch] BYREF
  __int64 v15; // [sp+15h] [bp-Bh]

  HIBYTE(v12) = a1;
  v13 = 0;
  v10 = 0;
  v11 = 0;
  LOWORD(v12) = 43;
  BYTE2(v12) = 9;
  v15 = 0;
  v14 = -1;
  result = sub_110594(v12, 0, (int)&v10, &v14);
  if ( result )
  {
    v8 = __rev16(HIWORD(v15));
    v9 = __rev16(WORD2(v15));
    *a2 = (unsigned __int16)__rev16(WORD1(v15));
    *a3 = v9;
    *a4 = v8;
    return 1;
  }
  return result;
}
