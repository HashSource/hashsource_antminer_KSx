int __fastcall set_logic_core_id(int a1)
{
  int v2; // r5
  int v3; // r0
  _BYTE *i; // r6
  int v5; // t1
  int *v6; // r7
  int j; // r5
  int v8; // t1
  int v10; // [sp+2Ch] [bp-1028h] BYREF
  _BYTE v11[32]; // [sp+30h] [bp-1024h] BYREF
  int v12; // [sp+50h] [bp-1004h] BYREF
  int v13; // [sp+54h] [bp-1000h] BYREF

  V_LOCK(a1);
  V_INT((int)v11, "chain");
  v2 = 0;
  v3 = logfmt_raw((int)&v12, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_eth_2280/backend_eth_2280.c",
    192,
    "set_logic_core_id",
    17,
    402,
    60,
    &v12);
  v10 = 100925952;
  v12 = 117768961;
  for ( i = (char *)&v10 + 1; ; ++i )
  {
    sub_D3D28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + v2), 0, 0);
    sub_D3D28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + v2), 1, 1);
    sub_D3D28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + v2), 2, 2);
    sub_D3D28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + v2), 3, 3);
    sub_D3D28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + v2), 4, 4);
    sub_D3D28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + v2), 5, 5);
    sub_D3D28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + v2), 6, 6);
    sub_D3D28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + v2), 7, 7);
    sub_D3D28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + v2), 8, 8);
    sub_D3D28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + v2), 9, 9);
    sub_D3D28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + v2), 10, 10);
    sub_D3D28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + v2), 11, 11);
    sub_D3D28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + v2), 12, 12);
    sub_D3D28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + v2), 13, 13);
    sub_D3D28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + v2), 14, 14);
    sub_D3D28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + v2), 15, 15);
    if ( i == v11 )
      break;
    v5 = (unsigned __int8)*i;
    v2 = v5;
  }
  v6 = (int *)((char *)&v12 + 1);
  for ( j = 1; ; j = v8 )
  {
    sub_D3D28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + j), 0, 8);
    sub_D3D28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + j), 1, 9);
    sub_D3D28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + j), 2, 10);
    sub_D3D28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + j), 3, 11);
    sub_D3D28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + j), 4, 12);
    sub_D3D28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + j), 5, 13);
    sub_D3D28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + j), 6, 14);
    sub_D3D28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + j), 7, 15);
    sub_D3D28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + j), 8, 0);
    sub_D3D28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + j), 9, 1);
    sub_D3D28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + j), 10, 2);
    sub_D3D28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + j), 11, 3);
    sub_D3D28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + j), 12, 4);
    sub_D3D28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + j), 13, 5);
    sub_D3D28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + j), 14, 6);
    sub_D3D28(a1, *(_BYTE *)(*(_DWORD *)(a1 + 488) + j), 15, 7);
    if ( &v13 == v6 )
      break;
    v8 = *(unsigned __int8 *)v6;
    v6 = (int *)((char *)v6 + 1);
  }
  return 0;
}
