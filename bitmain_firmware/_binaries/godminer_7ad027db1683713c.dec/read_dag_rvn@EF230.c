int __fastcall read_dag_rvn(int a1)
{
  int v2; // r4
  int i; // r4
  char v4; // r1
  int v5; // r6
  int v6; // r2
  int v7; // r7
  _QWORD *v8; // r0
  void (__fastcall *v9)(int, _DWORD *, int, _QWORD *, int *, int, int, _DWORD); // r5
  char *v10; // r4
  int *v11; // r8
  int *v12; // r12
  int *v13; // r5
  int v14; // r0
  int v15; // r1
  int *v16; // lr
  int v17; // r2
  int v18; // r3
  char *v20; // r8
  char *v21; // r4
  int v22; // t1
  char *v23; // r0
  int v24; // [sp+4h] [bp-1158h]
  int v25; // [sp+28h] [bp-1134h]
  int v26; // [sp+2Ch] [bp-1130h]
  int j; // [sp+30h] [bp-112Ch]
  int k; // [sp+34h] [bp-1128h]
  int *v29; // [sp+38h] [bp-1124h]
  int v30; // [sp+54h] [bp-1108h] BYREF
  _DWORD v31[6]; // [sp+58h] [bp-1104h] BYREF
  _DWORD v32[7]; // [sp+70h] [bp-10ECh] BYREF
  int v33; // [sp+8Ch] [bp-10D0h]
  char v34; // [sp+93h] [bp-10C9h] BYREF
  int v35; // [sp+94h] [bp-10C8h] BYREF
  char v36; // [sp+D3h] [bp-1089h] BYREF
  char s[132]; // [sp+D4h] [bp-1088h] BYREF
  _DWORD v38[2]; // [sp+158h] [bp-1004h] BYREF
  __int64 v39; // [sp+160h] [bp-FFCh]

  V_LOCK();
  V_INT((int)v32, "chain", *(int *)(a1 + 232));
  v2 = 0;
  logfmt_raw(
    (char *)v38,
    0x1000u,
    0,
    v33,
    v32[0],
    v32[1],
    v32[2],
    v32[3],
    v32[4],
    v32[5],
    v32[6],
    v33,
    "%s...",
    "read_dag_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    187,
    "read_dag_rvn",
    12,
    376,
    60,
    v38);
  do
  {
    sub_EC27C(a1, v2, 179, v2);
    ++v2;
    usleep(0x2710u);
  }
  while ( v2 != 8 );
  for ( i = 0; i != 8; ++i )
  {
    v4 = i;
    sub_EC27C(a1, v4, 28, 3);
  }
  memset(s, 0, 0x81u);
  v26 = 0;
  v31[0] = 0;
  v31[1] = 1;
  v31[2] = 4096;
  v31[3] = 4096;
  v31[4] = 16382;
  v31[5] = 0x3FFF;
  do
  {
    for ( j = 0; j != 8; ++j )
    {
      for ( k = 0; k != 8; ++k )
      {
        v29 = v31;
        do
        {
          v5 = 0;
          v6 = *v29++;
          v25 = v6;
          v7 = (v26 << 22) | (32 * j) | (4 * k) | (v6 << 8);
          do
          {
            v38[0] = 0;
            v39 = 0;
            BYTE1(v39) = v5;
            v30 = 0;
            v38[1] = v7;
            v8 = malloc(0x4Cu);
            v9 = *(void (__fastcall **)(int, _DWORD *, int, _QWORD *, int *, int, int, _DWORD))(a1 + 272);
            v10 = (char *)v8;
            *v8 = 0;
            v11 = (int *)((char *)v8 + 74);
            *(_QWORD *)((char *)v8 + 4) = 0;
            v9(a1, v38, 1, v8, &v30, v24, 2000, 0);
            v12 = (int *)(v10 + 10);
            v13 = &v35;
            do
            {
              v14 = *v12;
              v12 += 4;
              v15 = *(v12 - 3);
              v16 = v13;
              v17 = *(v12 - 2);
              v13 += 4;
              v18 = *(v12 - 1);
              *v16 = v14;
              v16[1] = v15;
              v16[2] = v17;
              v16[3] = v18;
            }
            while ( v12 != v11 );
            free(v10);
            if ( v30 )
            {
              v20 = &v34;
              v21 = s;
              do
              {
                v22 = (unsigned __int8)*++v20;
                v23 = v21;
                v21 += 2;
                sprintf(v23, "%02x", v22);
              }
              while ( &v36 != v20 );
              V_LOCK();
              logfmt_raw(
                (char *)v38,
                0x1000u,
                0,
                "[DAG] node_index %08x(chip %1d row %02d col %d ch %d s_addr %04x %s",
                v7,
                v5,
                v26,
                j,
                k,
                v25,
                s);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
                187,
                "read_dag_rvn",
                12,
                413,
                60,
                v38);
            }
            ++v5;
          }
          while ( v5 != 8 );
        }
        while ( v32 != v29 );
      }
    }
    ++v26;
  }
  while ( v26 != 12 );
  sub_EBFA0(a1, 28, 2);
  return 0;
}
