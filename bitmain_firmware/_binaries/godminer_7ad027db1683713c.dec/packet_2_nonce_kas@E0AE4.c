int __fastcall packet_2_nonce_kas(int a1, int a2, int a3, _BYTE *a4, _DWORD *a5, signed int *a6, _DWORD *a7)
{
  int v11; // r0
  char v12; // r3
  int v14; // r6
  int v15; // r9
  int v16; // r2
  int v17; // r3
  int *v18; // r0
  int v19; // r1
  int v20; // r0
  int *v21; // r3
  int v22; // r1
  int v23; // r1
  int v24; // r3
  signed int v25; // r0
  int v26; // r3
  int v27; // r2
  int *v28; // r1
  int *v29; // r3
  int v30; // r2
  int v31; // lr
  int v32; // r3
  __int64 v33; // d17
  char *v34; // r12
  unsigned __int64 v35; // r6
  __int64 v36; // r0
  unsigned __int64 v37; // r0
  int v38; // r12
  unsigned __int64 v39; // r4
  int i; // r4
  unsigned __int64 v41; // r10
  unsigned __int64 v42; // r0
  int v43; // r0
  signed int v44; // r1
  char *v45; // r1
  _QWORD *v46; // r2
  int v47; // r3
  __int64 v48; // t1
  int v49; // [sp+30h] [bp-102Ch]
  char *v50; // [sp+34h] [bp-1028h]
  _DWORD v51[7]; // [sp+38h] [bp-1024h] BYREF
  int v52; // [sp+54h] [bp-1008h]
  char s[4100]; // [sp+58h] [bp-1004h] BYREF

  v11 = BM_CRC5((_BYTE *)(a2 + 2), 91);
  v12 = *(_BYTE *)(a2 + 13);
  if ( (v12 & 0x80) == 0 )
    return 10;
  v14 = v12 & 0x1F;
  v15 = v11;
  if ( v11 == v14 || !*(_BYTE *)(a1 + 238) )
  {
    v16 = *(unsigned __int8 *)(a2 + 12);
    v17 = *(_DWORD *)(a1 + 800);
    if ( (v16 & 0x80) != 0 )
    {
      V_LOCK();
      logfmt_raw(s, 0x1000u, 0, "chip respond wrong work id ,err");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
        187,
        "packet_2_nonce_kas",
        18,
        282,
        20,
        s);
    }
    else
    {
      v18 = (int *)(v17 + 8 * v16);
      v19 = *v18;
      v20 = v18[1];
      *(_DWORD *)a3 = v19;
      *(_DWORD *)(a3 + 4) = v20;
      *a7 = v19;
      if ( v19 != -1 )
      {
        v21 = (int *)(v17 + 8 * (v16 + 128));
        v22 = *(_DWORD *)(a2 + 7);
        *(_DWORD *)(a3 + 26) = *(_DWORD *)(a2 + 3);
        *(_DWORD *)(a3 + 30) = v22;
        v23 = *v21;
        v24 = v21[1];
        *(_DWORD *)(a3 + 18) = v23;
        *(_DWORD *)(a3 + 22) = v24;
        LOBYTE(v24) = *(_BYTE *)(a2 + 11);
        *(_BYTE *)(a3 + 16) = v16;
        *(_BYTE *)(a3 + 17) = v24;
        v25 = sub_25ABA8(*(unsigned __int8 *)(a2 + 6), *(_DWORD *)(a1 + 404));
        if ( v25 >= *(_DWORD *)(a1 + 312) )
        {
          v43 = rand();
          sub_25A89C(v43, *(_DWORD *)(a1 + 312));
          v25 = v44;
        }
        *a6 = v25;
        *(_DWORD *)(a3 + 8) = v25;
        *(_DWORD *)(a3 + 12) = *(_BYTE *)(a2 + 10) & 0x7F;
        v26 = *(_DWORD *)(a3 + 30);
        *a5 = *(_DWORD *)(a3 + 26);
        a5[1] = v26;
        *a4 = 1;
        memset(s, 0, 0x800u);
        v27 = *(_DWORD *)(a1 + 228);
        v28 = &dword_2E0458[v27];
        if ( v28[4] == 999 )
        {
          v31 = *(_DWORD *)(a1 + 312);
          v28[4] = 0;
          if ( v31 <= 0 )
          {
            v35 = 0;
            v38 = 2 * v27;
          }
          else
          {
            v32 = *(_DWORD *)(a1 + 432);
            v33 = 0;
            v50 = s;
            v34 = s;
            v35 = 0;
            v49 = v32 + 48 * v31;
            while ( 1 )
            {
              v36 = *(_QWORD *)(v32 + 8);
              v32 += 48;
              v37 = v36 + *(_QWORD *)(v32 - 48) + v35;
              v35 = v37;
              *(_QWORD *)v34 = *(_QWORD *)(v32 - 32) + *(_QWORD *)(v32 - 16) + v33;
              v34 += 8;
              if ( v32 == v49 )
                break;
              v33 = *(_QWORD *)v34;
            }
            v38 = 2 * v27;
            v39 = *(_QWORD *)&dword_2E0458[2 * v27 + 20];
            if ( v39 >= v37 || v37 - v39 > 0x63 )
              goto LABEL_28;
            for ( i = 0; i < v31; ++i )
            {
              v41 = *(_QWORD *)v50;
              v42 = qword_2E0528[256 * v27 + i];
              v50 += 8;
              if ( v41 > v42 && v41 - v42 > 0x190 )
              {
                close_one_chip_cores_kas((int *)a1, (unsigned __int8)i);
                v27 = *(_DWORD *)(a1 + 228);
                v31 = *(_DWORD *)(a1 + 312);
              }
            }
            v38 = 2 * v27;
            if ( v31 > 0 )
            {
LABEL_28:
              v45 = s;
              v46 = &qword_2E0528[256 * v27 - 1];
              v47 = 0;
              do
              {
                ++v47;
                v48 = *(_QWORD *)v45;
                v45 += 8;
                v46[1] = v48;
                ++v46;
              }
              while ( v31 > v47 );
            }
          }
          *(_QWORD *)&dword_2E0458[v38 + 20] = v35;
        }
        else
        {
          ++v28[4];
        }
        return 0;
      }
      V_LOCK();
      logfmt_raw(s, 0x1000u, 0, "chip respond wrong work id ,err");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
        187,
        "packet_2_nonce_kas",
        18,
        289,
        20,
        s);
    }
    return 12;
  }
  v29 = &dword_2E0458[*(_DWORD *)(a1 + 232)];
  v30 = v29[1];
  v29[1] = v30 + 1;
  if ( v30 <= 9 )
  {
    V_LOCK();
    V_INT((int)v51, "chain", *(int *)(a1 + 232));
    logfmt_raw(
      s,
      0x1000u,
      0,
      v52,
      v51[0],
      v51[1],
      v51[2],
      v51[3],
      v51[4],
      v51[5],
      v51[6],
      v52,
      "chip id %2d, get nonce crc error calc value %04x expected value %04x",
      0,
      v15,
      v14);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
      187,
      "packet_2_nonce_kas",
      18,
      273,
      40,
      s);
  }
  return 11;
}
