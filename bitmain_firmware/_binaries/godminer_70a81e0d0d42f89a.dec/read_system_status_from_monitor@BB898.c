int __fastcall read_system_status_from_monitor(int a1)
{
  double v2; // d10
  double v3; // r0
  int v4; // r6
  float v5; // s16
  double v6; // d9
  __int64 v7; // d12
  int *v8; // r2
  float v9; // s17
  float v10; // s22
  float v11; // s23
  int v12; // t1
  char *v13; // r3
  __int64 v15; // r2
  double v17; // r0
  double v18; // r2
  double v19; // r0
  double v20; // r0
  double v21; // d9
  double v22; // r2
  int v23; // [sp+4h] [bp-Ch]
  int v24; // [sp+Ch] [bp-4h] BYREF

  v2 = 0.0;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  v24 = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  LODWORD(v3) = get_all_created_runtime(&v24);
  v4 = v24;
  v5 = 0.0;
  if ( v24 <= 0 )
  {
    v15 = 0;
    v7 = 0;
    v6 = 0.0;
    v9 = 0.0;
    v10 = 0.0;
    v11 = 0.0;
  }
  else
  {
    v6 = 0.0;
    v7 = 0;
    v8 = (int *)LODWORD(v3);
    HIDWORD(v3) = 224;
    v9 = 0.0;
    v10 = 0.0;
    v11 = 0.0;
    do
    {
      v12 = *v8++;
      v13 = (char *)&unk_2EC2C8 + 224 * *(_DWORD *)(v12 + 244);
      v7 += *((_QWORD *)v13 + 11);
      v11 = v11 + *((float *)v13 + 9);
      v10 = v10 + *((float *)v13 + 10);
      v9 = v9 + *((float *)v13 + 11);
      v5 = v5 + *((float *)v13 + 12);
      v6 = v6 + *((double *)v13 + 7);
      v2 = v2 + *((double *)v13 + 8);
    }
    while ( (int *)(LODWORD(v3) + 4 * v24) != v8 );
    if ( opt_algo != 12 || v6 == 0.0 )
      goto LABEL_8;
    v23 = LODWORD(v3);
    v17 = log10(v3);
    HIDWORD(v18) = (int)v6 - 1;
    v19 = pow(v17, v18);
    v20 = trunc(LODWORD(v19), HIDWORD(v19));
    v21 = v6 / 10.0;
    pow(v20, v22);
    HIDWORD(v15) = v24;
    LODWORD(v3) = v23;
    if ( v24 <= 0 )
      v15 = 0;
    v6 = 10.0 * v21;
    if ( v24 > 0 )
LABEL_8:
      v15 = *(_QWORD *)((char *)&unk_2EBDC8 + 224 * *(_DWORD *)(*(_DWORD *)LODWORD(v3) + 244) + 1380);
  }
  *(_DWORD *)a1 = v4;
  *(_QWORD *)(a1 + 4) = v15;
  *(float *)(a1 + 12) = v11;
  *(_QWORD *)(a1 + 48) = v7;
  *(float *)(a1 + 16) = v10;
  *(float *)(a1 + 20) = v9;
  *(float *)(a1 + 24) = v5;
  *(double *)(a1 + 32) = v6;
  *(double *)(a1 + 40) = v2;
  return a1;
}
