int __fastcall read_dag_rvn(int a1)
{
  int v2; // r4
  int v3; // r0
  int i; // r4
  char v5; // r1
  int v6; // r6
  int v7; // r2
  int v8; // r7
  _QWORD *v9; // r0
  void (__fastcall *v10)(int, _DWORD *, int, _QWORD *, int *, int, int, _DWORD, int, int, char *, int, const char *, const char *); // r5
  char *v11; // r4
  int *v12; // r8
  int *v13; // r12
  int *v14; // r5
  int v15; // r0
  int v16; // r1
  int *v17; // lr
  int v18; // r2
  int v19; // r3
  char *v21; // r8
  char *v22; // r4
  int v23; // t1
  char *v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // [sp+4h] [bp-1158h]
  int v28; // [sp+10h] [bp-114Ch]
  int v29; // [sp+14h] [bp-1148h]
  char *v30; // [sp+18h] [bp-1144h]
  int v31; // [sp+1Ch] [bp-1140h]
  const char *v32; // [sp+20h] [bp-113Ch]
  const char *v33; // [sp+24h] [bp-1138h]
  int v34; // [sp+28h] [bp-1134h]
  int v35; // [sp+2Ch] [bp-1130h]
  int j; // [sp+30h] [bp-112Ch]
  int k; // [sp+34h] [bp-1128h]
  int *v38; // [sp+38h] [bp-1124h]
  int v39; // [sp+54h] [bp-1108h] BYREF
  _DWORD v40[6]; // [sp+58h] [bp-1104h] BYREF
  _DWORD v41[8]; // [sp+70h] [bp-10ECh] BYREF
  char v42; // [sp+93h] [bp-10C9h] BYREF
  int v43; // [sp+94h] [bp-10C8h] BYREF
  char v44; // [sp+D3h] [bp-1089h] BYREF
  char s[132]; // [sp+D4h] [bp-1088h] BYREF
  _DWORD v46[2]; // [sp+158h] [bp-1004h] BYREF
  __int64 v47; // [sp+160h] [bp-FFCh]

  V_LOCK(a1);
  V_INT((int)v41, "chain");
  v33 = "read_dag_rvn";
  v32 = "%s...";
  v2 = 0;
  v28 = v41[4];
  v29 = v41[5];
  v30 = (char *)v41[6];
  v31 = v41[7];
  v3 = logfmt_raw((int)v46, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    187,
    "read_dag_rvn",
    12,
    385,
    60,
    v46);
  do
  {
    sub_EC9A4(a1, v2, 179, v2);
    ++v2;
    usleep(0x2710u);
  }
  while ( v2 != 8 );
  for ( i = 0; i != 8; ++i )
  {
    v5 = i;
    sub_EC9A4(a1, v5, 28, 3);
  }
  memset(s, 0, 0x81u);
  v35 = 0;
  v40[0] = 0;
  v40[1] = 1;
  v40[2] = 4096;
  v40[3] = 4096;
  v40[4] = 16382;
  v40[5] = 0x3FFF;
  do
  {
    for ( j = 0; j != 8; ++j )
    {
      for ( k = 0; k != 8; ++k )
      {
        v38 = v40;
        do
        {
          v6 = 0;
          v7 = *v38++;
          v34 = v7;
          v8 = (v35 << 22) | (32 * j) | (4 * k) | (v7 << 8);
          do
          {
            v46[0] = 0;
            v47 = 0;
            BYTE1(v47) = v6;
            v39 = 0;
            v46[1] = v8;
            v9 = malloc(0x4Cu);
            v10 = *(void (__fastcall **)(int, _DWORD *, int, _QWORD *, int *, int, int, _DWORD, int, int, char *, int, const char *, const char *))(a1 + 272);
            v11 = (char *)v9;
            *v9 = 0;
            v12 = (int *)((char *)v9 + 74);
            *(_QWORD *)((char *)v9 + 4) = 0;
            v10(a1, v46, 1, v9, &v39, v27, 2000, 0, v28, v29, v30, v31, v32, v33);
            v13 = (int *)(v11 + 10);
            v14 = &v43;
            do
            {
              v15 = *v13;
              v13 += 4;
              v16 = *(v13 - 3);
              v17 = v14;
              v18 = *(v13 - 2);
              v14 += 4;
              v19 = *(v13 - 1);
              *v17 = v15;
              v17[1] = v16;
              v17[2] = v18;
              v17[3] = v19;
            }
            while ( v13 != v12 );
            free(v11);
            if ( v39 )
            {
              v21 = &v42;
              v22 = s;
              do
              {
                v23 = (unsigned __int8)*++v21;
                v24 = v22;
                v22 += 2;
                v25 = sprintf(v24, "%02x", v23);
              }
              while ( &v44 != v21 );
              V_LOCK(v25);
              v30 = s;
              v28 = k;
              v29 = v34;
              v26 = logfmt_raw((int)v46, 0x1000u);
              V_UNLOCK(v26);
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
                187,
                "read_dag_rvn",
                12,
                422,
                60,
                v46);
            }
            ++v6;
          }
          while ( v6 != 8 );
        }
        while ( v41 != v38 );
      }
    }
    ++v35;
  }
  while ( v35 != 12 );
  sub_EC8B0(a1, 28, 2);
  return 0;
}
