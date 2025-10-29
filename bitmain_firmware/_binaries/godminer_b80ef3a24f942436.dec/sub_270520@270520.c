unsigned int __fastcall sub_270520(__int64 a1)
{
  int v1; // r5
  unsigned int v2; // r12
  unsigned int v3; // lr
  unsigned int v4; // r3
  int v5; // r2
  char v6; // r4
  unsigned int v7; // r3
  unsigned int v8; // r4
  bool v9; // nf
  int v10; // lr
  unsigned int v11; // r2
  unsigned int v12; // r2
  unsigned int v13; // r3

  LOWORD(v1) = 0;
  v2 = abs64(a1);
  v3 = abs64(a1) >> 32;
  v4 = __clz(v2) + 32;
  if ( v3 )
    v4 = __clz(v3);
  HIWORD(v1) = 24192;
  v5 = v4 & 0x3F;
  v6 = 32 - (v4 & 0x3F);
  v7 = v4 * (v1 | 0xA1000000);
  v8 = (v2 >> v6) | (v3 << v5);
  v10 = v5 - 32;
  v9 = v5 - 32 < 0;
  v11 = v2 << v5;
  if ( !v9 )
    v8 = v2 << v10;
  if ( v10 >= 0 )
    v11 = 0;
  v12 = (v11 >> 8) | (v8 << 24) | (unsigned __int16)v11;
  v13 = v7 + (v8 >> 8) + v1;
  if ( !a1 )
    v13 = v8 >> 8;
  return (v13 + ((v12 - ((v12 >> 31) & ~(v8 >> 8))) >> 31)) | HIDWORD(a1) & 0x80000000;
}
