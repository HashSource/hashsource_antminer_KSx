int __fastcall <core::str::iter::EscapeUnicode as core::fmt::Display>::fmt(int a1)
{
  char *v1; // r9
  bool v2; // zf
  int v3; // r0
  unsigned int v4; // r11
  char v5; // r0
  char v7; // [sp+4h] [bp-10h]
  int v8; // [sp+8h] [bp-Ch]

  v1 = *(char **)(a1 + 4);
  v8 = *(_DWORD *)(a1 + 24);
  v7 = *(_BYTE *)(a1 + 28);
  if ( *(_DWORD *)(a1 + 12) != 1114112 )
    __asm { ADD             PC, R2, R0 }
  v2 = v1 == 0;
  if ( v1 )
    v2 = v1 == *(char **)a1;
  if ( !v2 )
  {
    v3 = *v1;
    v4 = (unsigned __int8)v3;
    if ( v3 > -1
      || (v5 = v3 & 0x1F, v4 < 0xF0)
      || (v1[3] & 0x3F | ((v1[2] & 0x3F | ((v1[1] & 0x3F) << 6)) << 6) | ((v5 & 7) << 18)) != 0x110000 )
    {
      JUMPOUT(0x26536C);
    }
  }
  if ( v8 != 1114112 )
    __asm { ADD             PC, R2, R0 }
  return 0;
}
