int __fastcall pic1704_jump_to_app(char a1)
{
  __int16 v2; // [sp+4h] [bp-18h] BYREF
  int v3; // [sp+8h] [bp-14h] BYREF
  __int16 v4; // [sp+Ch] [bp-10h]
  int v5; // [sp+10h] [bp-Ch]
  int v6; // [sp+14h] [bp-8h]

  BYTE2(v5) = 2;
  v6 = 0;
  HIBYTE(v5) = a1;
  LOWORD(v5) = 6;
  v3 = 0;
  v4 = 0;
  v2 = 255;
  return sub_11217C(v5, 0, (int)&v3, (unsigned __int8 *)&v2);
}
