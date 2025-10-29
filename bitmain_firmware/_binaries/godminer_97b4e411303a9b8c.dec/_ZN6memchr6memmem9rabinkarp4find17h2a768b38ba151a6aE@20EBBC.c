int __fastcall memchr::memmem::rabinkarp::find(
        unsigned __int8 *a1,
        unsigned int a2,
        unsigned __int8 *a3,
        unsigned int a4)
{
  int v7; // r4
  unsigned int v8; // r7
  unsigned __int8 *v9; // r0
  int v10; // r6
  char v11; // r3
  unsigned __int8 *v12; // r1
  int v13; // r5
  int v14; // t1
  int v16; // r7
  unsigned int v17; // r0
  unsigned __int8 *v18; // r1
  int v19; // t1
  int v20; // r0
  int v21; // r1
  unsigned int v22; // r0
  unsigned __int8 *v23; // [sp+0h] [bp-4h]

  v7 = 0;
  if ( !a4 )
  {
    v13 = 1;
    v10 = 0;
    v16 = 0;
    goto LABEL_13;
  }
  v8 = 1;
  v9 = &a3[a4];
  v10 = *a3;
  v11 = 0;
  v12 = a3;
  v13 = 1;
  while ( (v11 & 1) != 0 )
  {
    if ( v12 == v9 )
      goto LABEL_8;
LABEL_4:
    v14 = *v12++;
    v13 *= 2;
    v8 = 0;
    v10 = v14 + 2 * v10;
    v11 = 1;
  }
  if ( v9 - v12 > v8 )
  {
    v12 += v8;
    goto LABEL_4;
  }
LABEL_8:
  if ( a2 < a4 )
    return 0;
  v16 = 0;
  v17 = a4;
  v18 = a1;
  do
  {
    v19 = *v18++;
    --v17;
    v16 = v19 + 2 * v16;
  }
  while ( v17 );
LABEL_13:
  v23 = a3;
  if ( v16 == v10 )
    goto LABEL_16;
  while ( a2 > a4 )
  {
    v20 = a1[v7];
    --a2;
    v21 = a1[a4 + v7++];
    v16 = v21 + 2 * (v16 - v13 * v20);
    if ( v16 == v10 )
    {
LABEL_16:
      v22 = sub_7D374(&a1[v7], a2, a3, a4);
      a3 = v23;
      if ( v22 )
        return 1;
    }
  }
  return 0;
}
