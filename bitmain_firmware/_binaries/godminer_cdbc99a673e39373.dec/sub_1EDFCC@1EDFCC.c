int __fastcall sub_1EDFCC(int *a1, _BYTE *a2, unsigned int a3)
{
  int v6; // r1
  int v7; // r4
  int v8; // r0
  int v9; // r6
  int v10; // r7
  int is_dir; // r0
  unsigned int v13; // r5
  int v14; // r1
  char v15; // r6
  char v16; // r4
  int v17; // r1
  unsigned int v18; // r5
  unsigned int v19; // r2
  int v20; // r1
  _BYTE *v21; // r6
  unsigned int v22; // r4
  int v23; // r1
  unsigned int v24; // r7
  int v25; // r5
  unsigned int v26; // r0
  unsigned int v27; // r2
  char v28; // r5
  unsigned int v29; // r7
  int v30; // r1
  int v31; // r2
  int v32; // [sp+0h] [bp-10h] BYREF
  int v33; // [sp+4h] [bp-Ch]
  int v34; // [sp+8h] [bp-8h]

  if ( a3 < 2 )
    goto LABEL_12;
  v6 = (unsigned __int8)byte_2EAB48;
  if ( byte_2EAB48 )
  {
    if ( byte_2EAB48 == 1 )
      goto LABEL_4;
LABEL_12:
    a1[1] = 0;
    return 0;
  }
  is_dir = std::path::Path::is_dir((int)aUsrLibDebug, 0xEu);
  v6 = 2;
  if ( is_dir )
    v6 = 1;
  byte_2EAB48 = v6;
  if ( v6 != 1 )
    goto LABEL_12;
LABEL_4:
  v7 = 2 * a3 + 32;
  if ( 2 * a3 == -32 )
  {
    v34 = 0;
    v32 = 0;
    v33 = 1;
  }
  else
  {
    if ( v7 <= -1 )
      alloc::raw_vec::capacity_overflow(32, v6);
    v8 = _rust_alloc(2 * a3 + 32);
    if ( !v8 )
      alloc::alloc::handle_alloc_error();
    v9 = 0;
    v10 = v8;
    v33 = v8;
    v34 = 0;
    v32 = 2 * a3 + 32;
    if ( (unsigned int)v7 > 0x18 )
      goto LABEL_15;
  }
  sub_77EE0((size_t *)&v32, 0, 25);
  v10 = v33;
  v9 = v34;
LABEL_15:
  memcpy((void *)(v10 + v9), "/usr/lib/debug/.build-id/.debugBytes__pthread_get_minstack", 0x19u);
  v13 = (unsigned __int8)*a2;
  v14 = v9 + 25;
  v15 = 87;
  v16 = 87;
  if ( v13 < 0xA0 )
    v15 = 48;
  v34 = v14;
  if ( v14 == v32 )
  {
    sub_1A5770((unsigned int *)&v32, v14);
    v10 = v33;
    v14 = v34;
  }
  *(_BYTE *)(v10 + v14) = v15 + (v13 >> 4);
  v17 = v14 + 1;
  v18 = *a2 & 0xF;
  v34 = v17;
  if ( v18 < 0xA )
    v16 = 48;
  if ( v17 == v32 )
  {
    sub_1A5770((unsigned int *)&v32, v17);
    v17 = v34;
  }
  v19 = v32;
  *(_BYTE *)(v33 + v17) = v16 + v18;
  v20 = v17 + 1;
  v34 = v20;
  if ( v20 == v19 )
  {
    sub_1A5770((unsigned int *)&v32, v20);
    v20 = v34;
  }
  v21 = a2 + 1;
  v22 = a3 - 1;
  *(_BYTE *)(v33 + v20) = 47;
  v23 = v20 + 1;
  v34 = v23;
  do
  {
    v24 = (unsigned __int8)*v21;
    v25 = 87;
    if ( v24 < 0xA0 )
      v25 = 48;
    if ( v23 == v32 )
    {
      sub_1A5770((unsigned int *)&v32, v23);
      v23 = v34;
    }
    v26 = v25 + (v24 >> 4);
    v27 = v32;
    v28 = 87;
    v29 = *v21 & 0xF;
    *(_BYTE *)(v33 + v23) = v26;
    v30 = v23 + 1;
    if ( v29 < 0xA )
      v28 = 48;
    v34 = v30;
    if ( v30 == v27 )
    {
      sub_1A5770((unsigned int *)&v32, v30);
      v30 = v34;
    }
    --v22;
    ++v21;
    *(_BYTE *)(v33 + v30) = v28 + v29;
    v23 = v30 + 1;
    v34 = v23;
  }
  while ( v22 );
  if ( (unsigned int)(v32 - v23) <= 5 )
  {
    sub_77EE0((size_t *)&v32, v23, 6);
    v23 = v34;
  }
  v31 = v33;
  *a1 = v32;
  a1[1] = v31;
  a1[2] = v23 + 6;
  *(_DWORD *)(v31 + v23) = 1650811950;
  *(_WORD *)(v31 + v23 + 4) = 26485;
  return 26485;
}
