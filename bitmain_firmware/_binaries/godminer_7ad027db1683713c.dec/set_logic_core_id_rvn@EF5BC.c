int __fastcall set_logic_core_id_rvn(int a1)
{
  int v2; // r5
  _DWORD *i; // r6
  int v4; // t1
  int *v5; // r7
  int j; // r5
  int v7; // t1
  int v9; // [sp+2Ch] [bp-1028h] BYREF
  _DWORD v10[7]; // [sp+30h] [bp-1024h] BYREF
  int v11; // [sp+4Ch] [bp-1008h]
  int v12; // [sp+50h] [bp-1004h] BYREF
  int v13; // [sp+54h] [bp-1000h] BYREF

  V_LOCK();
  V_INT((int)v10, "chain", *(int *)(a1 + 232));
  v2 = 0;
  logfmt_raw(
    (char *)&v12,
    0x1000u,
    0,
    v11,
    v10[0],
    v10[1],
    v10[2],
    v10[3],
    v10[4],
    v10[5],
    v10[6],
    v11,
    "%s...",
    "set_logic_core_id_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    187,
    "set_logic_core_id_rvn",
    21,
    428,
    60,
    &v12);
  v9 = 100925952;
  v12 = 117768961;
  for ( i = (int *)((char *)&v9 + 1); ; i = (_DWORD *)((char *)i + 1) )
  {
    sub_ED744(a1, *(_BYTE *)(*(_DWORD *)(a1 + 464) + v2), 0, 0);
    sub_ED744(a1, *(_BYTE *)(*(_DWORD *)(a1 + 464) + v2), 1, 1);
    sub_ED744(a1, *(_BYTE *)(*(_DWORD *)(a1 + 464) + v2), 2, 2);
    sub_ED744(a1, *(_BYTE *)(*(_DWORD *)(a1 + 464) + v2), 3, 3);
    sub_ED744(a1, *(_BYTE *)(*(_DWORD *)(a1 + 464) + v2), 4, 4);
    sub_ED744(a1, *(_BYTE *)(*(_DWORD *)(a1 + 464) + v2), 5, 5);
    sub_ED744(a1, *(_BYTE *)(*(_DWORD *)(a1 + 464) + v2), 6, 6);
    sub_ED744(a1, *(_BYTE *)(*(_DWORD *)(a1 + 464) + v2), 7, 7);
    sub_ED744(a1, *(_BYTE *)(*(_DWORD *)(a1 + 464) + v2), 8, 8);
    sub_ED744(a1, *(_BYTE *)(*(_DWORD *)(a1 + 464) + v2), 9, 9);
    sub_ED744(a1, *(_BYTE *)(*(_DWORD *)(a1 + 464) + v2), 10, 10);
    sub_ED744(a1, *(_BYTE *)(*(_DWORD *)(a1 + 464) + v2), 11, 11);
    sub_ED744(a1, *(_BYTE *)(*(_DWORD *)(a1 + 464) + v2), 12, 12);
    sub_ED744(a1, *(_BYTE *)(*(_DWORD *)(a1 + 464) + v2), 13, 13);
    sub_ED744(a1, *(_BYTE *)(*(_DWORD *)(a1 + 464) + v2), 14, 14);
    sub_ED744(a1, *(_BYTE *)(*(_DWORD *)(a1 + 464) + v2), 15, 15);
    if ( i == v10 )
      break;
    v4 = *(unsigned __int8 *)i;
    v2 = v4;
  }
  v5 = (int *)((char *)&v12 + 1);
  for ( j = 1; ; j = v7 )
  {
    sub_ED744(a1, *(_BYTE *)(*(_DWORD *)(a1 + 464) + j), 0, 8);
    sub_ED744(a1, *(_BYTE *)(*(_DWORD *)(a1 + 464) + j), 1, 9);
    sub_ED744(a1, *(_BYTE *)(*(_DWORD *)(a1 + 464) + j), 2, 10);
    sub_ED744(a1, *(_BYTE *)(*(_DWORD *)(a1 + 464) + j), 3, 11);
    sub_ED744(a1, *(_BYTE *)(*(_DWORD *)(a1 + 464) + j), 4, 12);
    sub_ED744(a1, *(_BYTE *)(*(_DWORD *)(a1 + 464) + j), 5, 13);
    sub_ED744(a1, *(_BYTE *)(*(_DWORD *)(a1 + 464) + j), 6, 14);
    sub_ED744(a1, *(_BYTE *)(*(_DWORD *)(a1 + 464) + j), 7, 15);
    sub_ED744(a1, *(_BYTE *)(*(_DWORD *)(a1 + 464) + j), 8, 0);
    sub_ED744(a1, *(_BYTE *)(*(_DWORD *)(a1 + 464) + j), 9, 1);
    sub_ED744(a1, *(_BYTE *)(*(_DWORD *)(a1 + 464) + j), 10, 2);
    sub_ED744(a1, *(_BYTE *)(*(_DWORD *)(a1 + 464) + j), 11, 3);
    sub_ED744(a1, *(_BYTE *)(*(_DWORD *)(a1 + 464) + j), 12, 4);
    sub_ED744(a1, *(_BYTE *)(*(_DWORD *)(a1 + 464) + j), 13, 5);
    sub_ED744(a1, *(_BYTE *)(*(_DWORD *)(a1 + 464) + j), 14, 6);
    sub_ED744(a1, *(_BYTE *)(*(_DWORD *)(a1 + 464) + j), 15, 7);
    if ( &v13 == v5 )
      break;
    v7 = *(unsigned __int8 *)v5;
    v5 = (int *)((char *)v5 + 1);
  }
  return 0;
}
