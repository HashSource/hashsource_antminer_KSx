int __fastcall sub_11D6C8(int a1, int a2, __int64 a3)
{
  int v3; // r10
  char *v6; // r6
  char *v7; // r8
  int v8; // r2
  __int64 v9; // r0
  int *v11; // r3
  int v12; // r2
  char v13; // t1
  char v14; // [sp+3h] [bp-49h] BYREF
  int v15; // [sp+4h] [bp-48h] BYREF
  __int64 v16; // [sp+8h] [bp-44h]
  __int64 v17; // [sp+10h] [bp-3Ch]
  double v18; // [sp+18h] [bp-34h]
  double v19; // [sp+20h] [bp-2Ch]
  double v20; // [sp+28h] [bp-24h]
  double v21; // [sp+30h] [bp-1Ch]
  _BYTE v22[13]; // [sp+38h] [bp-14h] BYREF

  v3 = a2 - 1;
  v16 = 0;
  v17 = 0;
  v6 = (char *)&v15;
  v7 = &v14 + a2;
  memset(v22, 0, sizeof(v22));
  v15 = 0;
  v18 = 0.0;
  v19 = 0.0;
  v20 = 0.0;
  v21 = 0.0;
  do
  {
    sub_2704F8(a3, HIDWORD(a3), 36, 0);
    *v6++ = aCheckReadBackD[v8 + 136];
    v9 = sub_2704F8(a3, HIDWORD(a3), 36, 0);
    a3 = v9;
  }
  while ( v6 != v7 );
  if ( v9 )
    return 0;
  v11 = (int *)((char *)&v15 + v3);
  v12 = a1 - 1;
  do
  {
    v13 = *((_BYTE *)v11 - 1);
    v11 = (int *)((char *)v11 - 1);
    *(_BYTE *)++v12 = v13;
  }
  while ( v11 != &v15 );
  *(_BYTE *)(a1 + v3) = 0;
  return 1;
}
