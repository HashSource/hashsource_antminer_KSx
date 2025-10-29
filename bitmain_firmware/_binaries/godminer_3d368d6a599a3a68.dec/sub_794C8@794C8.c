int *__fastcall sub_794C8(int *a1, unsigned int a2)
{
  int *result; // r0
  unsigned int v3; // r9
  unsigned int v4; // r1
  unsigned int v5; // r0
  int v6; // r2
  unsigned int v7; // r2
  unsigned int v8; // r10
  int *v9; // r11
  int *v10; // r0
  int v11; // r3
  int v12; // r4
  int v13; // r5
  int v14; // r6
  int v15; // r7
  int v16; // r2
  unsigned int v17; // r10
  int v18; // r3
  int v19; // r4
  int v20; // r5
  int v21; // r6
  int v22; // r7
  int *v23; // r11
  int v24; // r2
  int v25; // r3
  int v26; // r4
  int v27; // r5
  int v28; // r7
  int v29; // r2
  unsigned int v30; // r1
  unsigned int v31; // r0
  unsigned int v32; // r2
  unsigned int v33; // r11
  int *v34; // r9
  int *v35; // r0
  int v36; // r3
  int v37; // r4
  int v38; // r5
  int v39; // r6
  int v40; // r7
  int v41; // r2
  int v42; // r3
  int v43; // r5
  int v44; // r6
  int v45; // r7
  unsigned int i; // [sp+4h] [bp-28h]
  int *v47; // [sp+8h] [bp-24h]
  int v49; // [sp+10h] [bp-1Ch] BYREF
  int v50; // [sp+14h] [bp-18h]
  int v51; // [sp+18h] [bp-14h]
  int v52; // [sp+1Ch] [bp-10h]
  int v53; // [sp+20h] [bp-Ch]
  int v54; // [sp+24h] [bp-8h]

  result = 0;
  if ( a2 >> 1 )
  {
    v3 = a2;
    result = (int *)(a2 >> 1);
    do
    {
      v47 = (int *)((char *)result - 1);
      v4 = (2 * ((_DWORD)result - 1)) | 1;
      if ( v4 < v3 )
      {
        v5 = (unsigned int)result - 1;
        v6 = 2 * (_DWORD)v47;
        do
        {
          v7 = v6 + 2;
          if ( v7 < v3 && *(_QWORD *)&a1[6 * v4] < *(_QWORD *)&a1[6 * v7] )
            v4 = v7;
          v8 = v4;
          if ( v5 >= v3 )
            core::panicking::panic_bounds_check(v5, v3, &off_2DE288);
          if ( v4 >= v3 )
            core::panicking::panic_bounds_check(v4, v3, &off_2DE298);
          v9 = &a1[6 * v4];
          v10 = &a1[6 * v5];
          if ( *(_QWORD *)v10 >= *(_QWORD *)v9 )
            break;
          v11 = v10[1];
          v12 = v10[2];
          v13 = v10[3];
          v14 = v10[4];
          v15 = v10[5];
          v49 = *v10;
          v50 = v11;
          v51 = v12;
          v52 = v13;
          v53 = v14;
          v54 = v15;
          memmove(v10, &a1[6 * v4], 0x18u);
          v16 = v50;
          *v9 = v49;
          v9[1] = v16;
          v9[2] = v12;
          v9[3] = v13;
          v9[4] = v14;
          v9[5] = v15;
          v4 = (2 * v8) | 1;
          v6 = 2 * v8;
          v5 = v8;
        }
        while ( v4 < v3 );
      }
      result = v47;
    }
    while ( v47 );
    if ( v3 >= 2 )
    {
      v17 = v3;
      for ( i = v3; ; v3 = i )
      {
        if ( --v17 >= v3 )
          core::panicking::panic_bounds_check(v17, v3, &off_2DE278);
        v18 = a1[1];
        v19 = a1[2];
        v20 = a1[3];
        v21 = a1[4];
        v22 = a1[5];
        v23 = &a1[6 * v17];
        v49 = *a1;
        v50 = v18;
        v51 = v19;
        v52 = v20;
        v53 = v21;
        v54 = v22;
        memmove(a1, v23, 0x18u);
        result = &v49;
        v24 = v50;
        v25 = v51;
        v26 = v52;
        v27 = v53;
        v28 = v54;
        *v23 = v49;
        v23[1] = v24;
        v23[2] = v25;
        v23[3] = v26;
        v23[4] = v27;
        v23[5] = v28;
        if ( v17 < 2 )
          break;
        v29 = 0;
        v30 = 1;
        v31 = 0;
        do
        {
          v32 = v29 + 2;
          if ( v32 < v17 && *(_QWORD *)&a1[6 * v30] < *(_QWORD *)&a1[6 * v32] )
            v30 = v32;
          v33 = v30;
          if ( v31 >= v17 )
            core::panicking::panic_bounds_check(v31, v17, &off_2DE288);
          if ( v30 >= v17 )
            core::panicking::panic_bounds_check(v30, v17, &off_2DE298);
          v34 = &a1[6 * v30];
          v35 = &a1[6 * v31];
          if ( *(_QWORD *)v35 >= *(_QWORD *)v34 )
            break;
          v36 = v35[1];
          v37 = v35[2];
          v38 = v35[3];
          v39 = v35[4];
          v40 = v35[5];
          v49 = *v35;
          v50 = v36;
          v51 = v37;
          v52 = v38;
          v53 = v39;
          v54 = v40;
          memmove(v35, &a1[6 * v30], 0x18u);
          v41 = v50;
          v42 = v51;
          v43 = v52;
          v44 = v53;
          v45 = v54;
          *v34 = v49;
          v34[1] = v41;
          v34[2] = v42;
          v34[3] = v43;
          v34[4] = v44;
          v34[5] = v45;
          v30 = (2 * v33) | 1;
          v29 = 2 * v33;
          v31 = v33;
        }
        while ( v30 < v17 );
      }
    }
  }
  return result;
}
