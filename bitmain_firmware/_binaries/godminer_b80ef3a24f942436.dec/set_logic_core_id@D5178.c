int __fastcall set_logic_core_id(int a1)
{
  _BYTE *v2; // r7
  int v3; // r0
  int v4; // r0
  int v5; // r11
  int v6; // r0
  int v7; // t1
  int *v8; // r7
  int i; // r6
  int v10; // t1
  int v12; // [sp+2Ch] [bp-1048h] BYREF
  _BYTE v13[32]; // [sp+30h] [bp-1044h] BYREF
  int v14; // [sp+50h] [bp-1024h] BYREF
  int v15; // [sp+70h] [bp-1004h] BYREF
  int v16; // [sp+74h] [bp-1000h] BYREF

  V_LOCK(a1);
  V_INT((int)v13, "chain", *(int *)(a1 + 248));
  v2 = (char *)&v12 + 1;
  v3 = logfmt_raw((int)&v15, 0x1000u);
  V_UNLOCK(v3);
  v4 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bu"
         "ild/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
         187,
         "set_logic_core_id",
         17,
         410,
         60,
         &v15);
  V_LOCK(v4);
  V_INT((int)&v14, "chain", *(int *)(a1 + 248));
  v5 = 0;
  v6 = logfmt_raw((int)&v15, 0x1000u);
  V_UNLOCK(v6);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    187,
    "set_logic_core_id",
    17,
    433,
    60,
    &v15);
  v12 = 100925952;
  v15 = 117768961;
  while ( 1 )
  {
    sub_D38E4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + v5), 0, 0);
    sub_D38E4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + v5), 1, 1);
    sub_D38E4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + v5), 2, 2);
    sub_D38E4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + v5), 3, 3);
    sub_D38E4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + v5), 4, 4);
    sub_D38E4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + v5), 5, 5);
    sub_D38E4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + v5), 6, 6);
    sub_D38E4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + v5), 7, 7);
    sub_D38E4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + v5), 8, 8);
    sub_D38E4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + v5), 9, 9);
    sub_D38E4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + v5), 10, 10);
    sub_D38E4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + v5), 11, 11);
    sub_D38E4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + v5), 12, 12);
    sub_D38E4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + v5), 13, 13);
    sub_D38E4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + v5), 14, 14);
    sub_D38E4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + v5), 15, 15);
    if ( v2 == v13 )
      break;
    v7 = (unsigned __int8)*v2++;
    v5 = v7;
  }
  v8 = (int *)((char *)&v15 + 1);
  for ( i = 1; ; i = v10 )
  {
    sub_D38E4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + i), 0, 8);
    sub_D38E4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + i), 1, 9);
    sub_D38E4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + i), 2, 10);
    sub_D38E4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + i), 3, 11);
    sub_D38E4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + i), 4, 12);
    sub_D38E4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + i), 5, 13);
    sub_D38E4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + i), 6, 14);
    sub_D38E4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + i), 7, 15);
    sub_D38E4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + i), 8, 0);
    sub_D38E4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + i), 9, 1);
    sub_D38E4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + i), 10, 2);
    sub_D38E4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + i), 11, 3);
    sub_D38E4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + i), 12, 4);
    sub_D38E4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + i), 13, 5);
    sub_D38E4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + i), 14, 6);
    sub_D38E4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + i), 15, 7);
    if ( &v16 == v8 )
      break;
    v10 = *(unsigned __int8 *)v8;
    v8 = (int *)((char *)v8 + 1);
  }
  return 0;
}
