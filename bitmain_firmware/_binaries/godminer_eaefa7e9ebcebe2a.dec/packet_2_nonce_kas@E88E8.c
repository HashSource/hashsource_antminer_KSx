int __fastcall packet_2_nonce_kas(int a1, int a2, int a3, _BYTE *a4, _DWORD *a5, int *a6, _DWORD *a7)
{
  int v11; // r0
  int v13; // r2
  int v14; // r3
  int *v15; // r0
  int v16; // r1
  int v17; // r0
  int *v18; // r3
  int v19; // r1
  int v20; // r1
  int v21; // r3
  int v22; // r0
  int v23; // r3
  int v24; // r2
  int *v25; // r1
  int *v26; // r3
  int v27; // r2
  int v28; // r0
  int v29; // lr
  int v30; // r3
  __int64 v31; // d17
  __int64 *v32; // r12
  unsigned __int64 v33; // r6
  __int64 v34; // r0
  unsigned __int64 v35; // r0
  int v36; // r12
  unsigned __int64 v37; // r4
  int i; // r4
  unsigned __int64 v39; // r10
  unsigned __int64 v40; // r0
  int v41; // r0
  int v42; // r1
  __int64 *v43; // r1
  char *v44; // r2
  int v45; // r3
  __int64 v46; // t1
  int v47; // r0
  int v48; // r0
  int v49; // [sp+30h] [bp-102Ch]
  unsigned __int64 *v50; // [sp+34h] [bp-1028h]
  int v51; // [sp+38h] [bp-1024h] BYREF
  _BYTE s[4100]; // [sp+58h] [bp-1004h] BYREF

  v11 = BM_CRC5(a2 + 2, 91);
  if ( (*(_BYTE *)(a2 + 13) & 0x80) == 0 )
    return 10;
  if ( v11 == (*(_BYTE *)(a2 + 13) & 0x1F) || !*(_BYTE *)(a1 + 254) )
  {
    v13 = *(unsigned __int8 *)(a2 + 12);
    v14 = *(_DWORD *)(a1 + 824);
    if ( (v13 & 0x80) != 0 )
    {
      V_LOCK(v11);
      v48 = logfmt_raw((int)s, 0x1000u);
      V_UNLOCK(v48);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/backend_kas_2380/backend_kas_2380.c",
        192,
        "packet_2_nonce_kas",
        18,
        284,
        20,
        s);
    }
    else
    {
      v15 = (int *)(v14 + 8 * v13);
      v16 = *v15;
      v17 = v15[1];
      *(_DWORD *)a3 = v16;
      *(_DWORD *)(a3 + 4) = v17;
      *a7 = v16;
      if ( v16 != -1 )
      {
        v18 = (int *)(v14 + 8 * (v13 + 128));
        v19 = *(_DWORD *)(a2 + 7);
        *(_DWORD *)(a3 + 26) = *(_DWORD *)(a2 + 3);
        *(_DWORD *)(a3 + 30) = v19;
        v20 = *v18;
        v21 = v18[1];
        *(_DWORD *)(a3 + 18) = v20;
        *(_DWORD *)(a3 + 22) = v21;
        LOBYTE(v21) = *(_BYTE *)(a2 + 11);
        *(_BYTE *)(a3 + 16) = v13;
        *(_BYTE *)(a3 + 17) = v21;
        v22 = sub_26CF70(*(unsigned __int8 *)(a2 + 6), *(_DWORD *)(a1 + 428));
        if ( v22 >= *(_DWORD *)(a1 + 332) )
        {
          v41 = rand();
          sub_26CC64(v41, *(_DWORD *)(a1 + 332));
          v22 = v42;
        }
        *a6 = v22;
        *(_DWORD *)(a3 + 8) = v22;
        *(_DWORD *)(a3 + 12) = *(_BYTE *)(a2 + 10) & 0x7F;
        v23 = *(_DWORD *)(a3 + 30);
        *a5 = *(_DWORD *)(a3 + 26);
        a5[1] = v23;
        *a4 = 1;
        memset(s, 0, 0x800u);
        v24 = *(_DWORD *)(a1 + 244);
        v25 = &dword_2F6950[v24];
        if ( v25[4] == 999 )
        {
          v29 = *(_DWORD *)(a1 + 332);
          v25[4] = 0;
          if ( v29 <= 0 )
          {
            v33 = 0;
            v36 = 2 * v24;
          }
          else
          {
            v30 = *(_DWORD *)(a1 + 456);
            v31 = 0;
            v50 = (unsigned __int64 *)s;
            v32 = (__int64 *)s;
            v33 = 0;
            v49 = v30 + 48 * v29;
            while ( 1 )
            {
              v34 = *(_QWORD *)(v30 + 8);
              v30 += 48;
              v35 = v34 + *(_QWORD *)(v30 - 48) + v33;
              v33 = v35;
              *v32++ = *(_QWORD *)(v30 - 32) + *(_QWORD *)(v30 - 16) + v31;
              if ( v30 == v49 )
                break;
              v31 = *v32;
            }
            v36 = 2 * v24;
            v37 = *(_QWORD *)&dword_2F6950[2 * v24 + 20];
            if ( v37 >= v35 || v35 - v37 > 0x63 )
              goto LABEL_28;
            for ( i = 0; i < v29; ++i )
            {
              v39 = *v50;
              v40 = qword_2F6A20[256 * v24 + i];
              ++v50;
              if ( v39 > v40 && v39 - v40 > 0x190 )
              {
                close_one_chip_cores_kas(a1, i);
                v24 = *(_DWORD *)(a1 + 244);
                v29 = *(_DWORD *)(a1 + 332);
              }
            }
            v36 = 2 * v24;
            if ( v29 > 0 )
            {
LABEL_28:
              v43 = (__int64 *)s;
              v44 = (char *)&qword_2F6A20[256 * v24 - 1];
              v45 = 0;
              do
              {
                ++v45;
                v46 = *v43++;
                *((_QWORD *)v44 + 1) = v46;
                v44 += 8;
              }
              while ( v29 > v45 );
            }
          }
          *(_QWORD *)&dword_2F6950[v36 + 20] = v33;
        }
        else
        {
          ++v25[4];
        }
        return 0;
      }
      V_LOCK(a7);
      v47 = logfmt_raw((int)s, 0x1000u);
      V_UNLOCK(v47);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/backend_kas_2380/backend_kas_2380.c",
        192,
        "packet_2_nonce_kas",
        18,
        291,
        20,
        s);
    }
    return 12;
  }
  v26 = &dword_2F6950[*(_DWORD *)(a1 + 248)];
  v27 = v26[1];
  v26[1] = v27 + 1;
  if ( v27 <= 9 )
  {
    V_LOCK(v11);
    V_INT((int)&v51, "chain");
    v28 = logfmt_raw((int)s, 0x1000u);
    V_UNLOCK(v28);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_kas_2380/backend_kas_2380.c",
      192,
      "packet_2_nonce_kas",
      18,
      275,
      40,
      s);
  }
  return 11;
}
