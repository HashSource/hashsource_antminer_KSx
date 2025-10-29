int __fastcall sha256_transf(int result, unsigned __int8 *a2, int a3)
{
  unsigned __int8 *v3; // r0
  char *v4; // r12
  int *v5; // lr
  int v6; // r4
  int v7; // r1
  int v8; // r3
  int v9; // t1
  unsigned int v10; // r2
  char *v11; // lr
  unsigned int v12; // t1
  int *v13; // r2
  int **v14; // r3
  int *v15; // r0
  int *v16; // t1
  int v17; // r3
  int v18; // lr
  int v19; // r9
  int v20; // r7
  int v21; // r4
  int v22; // r6
  int v23; // r5
  int v24; // r10
  void *(**v25)(void *, int, size_t); // r8
  void *(*v26)(void *, int, size_t); // t1
  char *v27; // r2
  char *v28; // r1
  char *v29; // r0
  char *v30; // r2
  int *v31; // r3
  int **v32; // r1
  int *v33; // t1
  int *v34; // [sp+0h] [bp-168h]
  unsigned __int8 *v35; // [sp+4h] [bp-164h]
  int *v36; // [sp+8h] [bp-160h]
  unsigned __int8 *v37; // [sp+14h] [bp-154h]
  int *v38; // [sp+18h] [bp-150h]
  int *v39; // [sp+1Ch] [bp-14Ch] BYREF
  char *v40; // [sp+20h] [bp-148h]
  int v41; // [sp+24h] [bp-144h]
  int v42; // [sp+28h] [bp-140h]
  int v43; // [sp+2Ch] [bp-13Ch]
  char *v44; // [sp+30h] [bp-138h]
  int v45; // [sp+34h] [bp-134h]
  int v46; // [sp+38h] [bp-130h]
  int v47; // [sp+3Ch] [bp-12Ch] BYREF
  char v48; // [sp+40h] [bp-128h] BYREF
  char v49; // [sp+7Ch] [bp-ECh] BYREF
  char v50; // [sp+100h] [bp-68h] BYREF

  if ( a3 > 0 )
  {
    v35 = a2;
    v37 = &a2[64 * a3];
    v38 = (int *)(result + 136);
    v39 = (int *)(result + 168);
    do
    {
      v3 = v35;
      v4 = &v48;
      v5 = &v47;
      do
      {
        v6 = v3[2];
        v7 = v3[3];
        v8 = v3[1] << 16;
        v9 = *v3;
        v3 += 4;
        v5[1] = v8 | (v6 << 8) | v7 | (v9 << 24);
        ++v5;
      }
      while ( &v49 != (char *)v5 );
      do
      {
        v10 = *((_DWORD *)v4 + 14);
        v11 = v4;
        v12 = *((_DWORD *)v4 + 1);
        v4 += 4;
        *((_DWORD *)v4 + 15) = (__ROR4__(v10, 19) ^ __ROR4__(v10, 17) ^ (v10 >> 10))
                             + *((_DWORD *)v11 + 9)
                             + *(_DWORD *)v11
                             + (__ROR4__(v12, 18) ^ __ROR4__(v12, 7) ^ (v12 >> 3));
      }
      while ( &v50 != v4 );
      v13 = v38;
      v14 = &v39;
      v15 = v39;
      do
      {
        v16 = (int *)*v13++;
        v14[1] = v16;
        ++v14;
      }
      while ( v15 != v13 );
      v36 = v13;
      v17 = v47;
      v18 = (int)v44;
      v19 = v45;
      v20 = v46;
      v21 = (int)v40;
      v22 = v41;
      v23 = v42;
      v24 = v43;
      v25 = &off_2D3534;
      v34 = &v47;
      while ( 1 )
      {
        v26 = v25[1];
        ++v25;
        v27 = (char *)v26 + v34[1];
        ++v34;
        v28 = &v27[(__ROR4__(v18, 11) ^ __ROR4__(v18, 6) ^ __ROR4__(v18, 25)) + (v20 & ~v18 ^ v19 & v18) + v17];
        v29 = &v28[v24];
        v30 = &v28[(__ROR4__(v21, 13) ^ __ROR4__(v21, 2) ^ __ROR4__(v21, 22)) + ((v23 ^ v22) & v21 ^ v23 & v22)];
        v17 = v20;
        v24 = v23;
        if ( &unk_2D3634 == (_UNKNOWN *)v25 )
          break;
        v23 = v22;
        v20 = v19;
        v22 = v21;
        v19 = v18;
        v21 = (int)v30;
        v18 = (int)v29;
      }
      v44 = v29;
      v31 = v38;
      v32 = &v39;
      v47 = v20;
      v45 = v18;
      v46 = v19;
      v40 = v30;
      v41 = v21;
      v42 = v22;
      v43 = v23;
      do
      {
        result = *v31;
        v33 = v32[1];
        ++v32;
        *v31++ += (int)v33;
      }
      while ( v36 != v31 );
      v35 += 64;
    }
    while ( v37 != v35 );
  }
  return result;
}
