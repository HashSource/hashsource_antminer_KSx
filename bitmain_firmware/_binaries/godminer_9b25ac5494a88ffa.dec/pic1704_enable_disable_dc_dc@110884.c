int __fastcall pic1704_enable_disable_dc_dc(char a1, char a2)
{
  _BYTE v3[5]; // [sp+7h] [bp-1Dh] BYREF
  __int16 v4; // [sp+Ch] [bp-18h] BYREF
  _DWORD v5[2]; // [sp+10h] [bp-14h] BYREF
  int v6; // [sp+18h] [bp-Ch]
  _BYTE *v7; // [sp+1Ch] [bp-8h]

  LOWORD(v6) = 277;
  BYTE2(v6) = 2;
  v7 = v3;
  v3[0] = a2;
  HIBYTE(v6) = a1;
  v5[0] = 0;
  *(_DWORD *)((char *)v5 + 3) = 0;
  v4 = 255;
  return sub_1103CC(v6, (int)v3, (int)v5, (unsigned __int8 *)&v4);
}
