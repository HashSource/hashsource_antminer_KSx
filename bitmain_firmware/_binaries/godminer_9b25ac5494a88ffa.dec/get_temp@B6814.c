int __fastcall get_temp(int a1)
{
  int v1; // r4
  int v2; // r7
  char *v3; // r0
  int *v4; // r6
  int v5; // r9
  char *v6; // r8
  int v7; // t1
  signed int v8; // r3
  bool v9; // cc
  int *v10; // r3
  int *v11; // r2
  int v12; // r4
  int v13; // r1
  int v14; // t1
  int v15; // r0
  signed int v17; // r6
  _DWORD *all_created_runtime; // r0
  _DWORD *v19; // r7
  _DWORD *v20; // r7
  signed int v21; // r4
  int v22; // t1
  signed int *v23; // r3
  signed int v24; // r2
  signed int v25; // t1
  signed int *v26; // r3
  signed int v27; // r2
  signed int v28; // t1
  signed int v29; // r6
  _DWORD *v30; // r0
  _DWORD *v31; // r7
  _DWORD *v32; // r7
  int v33; // t1
  signed int *v34; // r3
  signed int v35; // r2
  signed int v36; // t1
  signed int *v37; // r3
  signed int v38; // r2
  signed int v39; // t1
  size_t nmemb; // [sp+4h] [bp-E8h] BYREF
  _DWORD *v41; // [sp+8h] [bp-E4h] BYREF
  signed int *v42; // [sp+Ch] [bp-E0h]
  signed int *v43; // [sp+10h] [bp-DCh]
  signed int *v44; // [sp+14h] [bp-D8h]
  signed int *v45; // [sp+18h] [bp-D4h]
  int v46; // [sp+24h] [bp-C8h]
  int v47; // [sp+28h] [bp-C4h]

  switch ( a1 )
  {
    case 0:
      v17 = 0;
      nmemb = 0;
      all_created_runtime = (_DWORD *)get_all_created_runtime(&nmemb);
      v19 = all_created_runtime;
      if ( (int)nmemb <= 0 )
        return 0x80000000;
      read_status_from_monitor(&v41, *all_created_runtime);
      if ( (int)nmemb <= 0 )
        return 0x80000000;
      v20 = v19 - 1;
      v21 = 0x80000000;
      do
      {
        v22 = v20[1];
        ++v20;
        read_status_from_monitor(&v41, v22);
        if ( v46 > 0 )
        {
          v23 = v42;
          do
          {
            v25 = *v23++;
            v24 = v25;
            if ( v21 < v25 )
              v21 = v24;
          }
          while ( &v42[v46] != v23 );
        }
        if ( v47 > 0 )
        {
          v26 = v44;
          do
          {
            v28 = *v26++;
            v27 = v28;
            if ( v21 < v28 )
              v21 = v27;
          }
          while ( &v44[v47] != v26 );
        }
        ++v17;
      }
      while ( v17 < (int)nmemb );
      return v21;
    case 1:
      return sub_B6388();
    case 2:
      return sub_B65D8();
    case 3:
      v29 = 0;
      nmemb = 0;
      v30 = (_DWORD *)get_all_created_runtime(&nmemb);
      v31 = v30;
      if ( (int)nmemb <= 0 )
        return 0x7FFFFFFF;
      read_status_from_monitor(&v41, *v30);
      if ( (int)nmemb <= 0 )
        return 0x7FFFFFFF;
      v32 = v31 - 1;
      v21 = 0x7FFFFFFF;
      do
      {
        v33 = v32[1];
        ++v32;
        read_status_from_monitor(&v41, v33);
        if ( v46 > 0 )
        {
          v34 = v43;
          do
          {
            v36 = *v34++;
            v35 = v36;
            if ( v21 >= v36 )
              v21 = v35;
          }
          while ( &v43[v46] != v34 );
        }
        if ( v47 > 0 )
        {
          v37 = v45;
          do
          {
            v39 = *v37++;
            v38 = v39;
            if ( v21 >= v39 )
              v21 = v38;
          }
          while ( v37 != &v45[v47] );
        }
        ++v29;
      }
      while ( v29 < (int)nmemb );
      return v21;
    case 4:
      v1 = 0;
      nmemb = 0;
      v2 = get_all_created_runtime(&nmemb);
      v3 = (char *)calloc(nmemb, 4u);
      v4 = (int *)v3;
      if ( v3 )
      {
        if ( (int)nmemb <= 0 )
          goto LABEL_51;
        v5 = v2 - 4;
        v6 = v3 - 4;
        do
        {
          v7 = *(_DWORD *)(v5 + 4);
          v5 += 4;
          read_status_from_monitor(&v41, v7);
          v8 = nmemb;
          v9 = ++v1 < (int)nmemb;
          *((_DWORD *)v6 + 1) = *v41;
          v6 += 4;
        }
        while ( v9 );
        if ( v8 <= 0 )
        {
LABEL_51:
          v12 = -64;
        }
        else
        {
          v10 = &v4[v8];
          v11 = v4;
          v12 = -64;
          do
          {
            v14 = *v11++;
            v13 = v14;
            if ( v12 < v14 )
              v12 = v13;
          }
          while ( v10 != v11 );
        }
        v15 = sub_B65D8();
        if ( v15 != -64 && (int)nmemb > 0 )
          v12 += 2
               * ((v15 + 8 - *(_DWORD *)(*(_DWORD *)v2 + 392)) & ~((v15 + 8 - *(_DWORD *)(*(_DWORD *)v2 + 392)) >> 31))
               + 2
               * ((v15 + 3 - *(_DWORD *)(*(_DWORD *)v2 + 392)) & ~((v15 + 3 - *(_DWORD *)(*(_DWORD *)v2 + 392)) >> 31));
        free(v4);
        return v12;
      }
      else
      {
        printf("invalid pointer(%s)!\n", "temp_avg_chip_local");
        return 255;
      }
    default:
      return sub_B678C(a1);
  }
}
