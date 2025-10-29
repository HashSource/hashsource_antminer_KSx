int __fastcall pic1704_set_voltage(char a1, unsigned __int8 a2)
{
  __int16 v3; // [sp+4h] [bp-1Ch] BYREF
  __int16 v4; // [sp+8h] [bp-18h] BYREF
  char v5; // [sp+Ah] [bp-16h]
  int v6; // [sp+Ch] [bp-14h]
  __int16 *v7; // [sp+10h] [bp-10h]
  _BYTE v8[12]; // [sp+14h] [bp-Ch] BYREF

  HIBYTE(v6) = a1;
  v7 = &v4;
  LOWORD(v6) = 784;
  BYTE2(v6) = 2;
  v4 = a2;
  v5 = 0;
  memset(v8, 0, 9);
  v3 = 255;
  return sub_100E9C(v6, (int)&v4, (int)v8, (unsigned __int8 *)&v3);
}
