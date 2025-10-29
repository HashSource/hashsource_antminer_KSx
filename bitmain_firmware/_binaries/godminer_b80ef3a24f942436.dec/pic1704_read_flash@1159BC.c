int __fastcall pic1704_read_flash(char a1, void *a2, char a3, size_t a4)
{
  unsigned __int8 *v6; // r5
  int v7; // lr
  unsigned __int8 *v8; // r2
  unsigned int v9; // r3
  __int16 v10; // t1
  unsigned __int8 *v11; // r0
  unsigned int v12; // r2
  int v13; // r4
  size_t v15; // r2
  _BYTE v16[4]; // [sp+4h] [bp-14h] BYREF
  int v17; // [sp+8h] [bp-10h]
  _BYTE *v18; // [sp+Ch] [bp-Ch]
  double v19; // [sp+10h] [bp-8h] BYREF

  v19 = 0.0;
  HIBYTE(v17) = a1;
  BYTE2(v17) = a4 + 5;
  v18 = v16;
  LOWORD(v17) = 564;
  v16[0] = a3;
  v16[1] = a4;
  v6 = (unsigned __int8 *)malloc(a4 + 5);
  v7 = sub_114464(v17, (int)v16, (int)&v19, v6);
  if ( !v7 )
    goto LABEL_8;
  if ( a4 == -3 )
  {
    v12 = 0;
    v11 = v6;
    LOBYTE(v9) = 0;
  }
  else
  {
    v8 = v6 - 1;
    LOWORD(v9) = 0;
    do
    {
      v10 = *++v8;
      v9 = (unsigned __int16)(v9 + v10);
    }
    while ( &v6[a4 + 2] != v8 );
    v11 = &v6[a4 + 3];
    v12 = v9 >> 8;
  }
  if ( *v11 == v12 && v6[a4 + 4] == (unsigned __int8)v9 )
  {
    v15 = a4;
    v13 = v7;
    memcpy(a2, v6 + 3, v15);
  }
  else
  {
LABEL_8:
    v13 = 0;
  }
  free(v6);
  return v13;
}
