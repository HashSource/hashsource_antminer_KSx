int __fastcall sub_B1278(int a1, const char **a2)
{
  size_t *v2; // r5
  __int64 v3; // r2
  int *v4; // r4
  const char **v6; // r11
  const char *v7; // r1
  size_t v8; // r7
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r3
  int v14; // r1
  int v15; // r2
  void (__fastcall *v16)(int, __int64 *); // r3
  __int64 v18; // [sp+0h] [bp-194h] BYREF
  char dest[64]; // [sp+8h] [bp-18Ch] BYREF
  _BYTE v20[286]; // [sp+48h] [bp-14Ch] BYREF
  int v21; // [sp+168h] [bp-2Ch]
  int v22; // [sp+16Ch] [bp-28h]
  int v23; // [sp+170h] [bp-24h]
  int v24; // [sp+174h] [bp-20h]
  int v25; // [sp+178h] [bp-1Ch]
  int v26; // [sp+17Ch] [bp-18h]
  int v27; // [sp+180h] [bp-14h]
  int v28; // [sp+184h] [bp-10h]
  int v29; // [sp+188h] [bp-Ch]
  __int16 v30; // [sp+18Ch] [bp-8h] BYREF
  char v31; // [sp+18Eh] [bp-6h]

  v2 = (size_t *)a2[283];
  if ( v2 )
  {
    v3 = *(_QWORD *)a2;
    v4 = (int *)(a2 + 258);
    v6 = a2;
    v7 = a2[281];
    v8 = *v2;
    v6 += 2;
    v18 = v3;
    strcpy(dest, v7);
    v9 = target_to_diff_kda(v4);
    v10 = v4[1];
    v11 = v4[2];
    v12 = v4[3];
    v21 = v9;
    v22 = *v4;
    v23 = v10;
    v24 = v11;
    v25 = v12;
    v13 = v4[7];
    v14 = v4[5];
    v15 = v4[6];
    v26 = v4[4];
    v27 = v14;
    v28 = v15;
    v29 = v13;
    memcpy(&v30, v2 + 1, *v2);
    memcpy((char *)&v30 + *v2, (char *)v6 + v8 + 283, 3 - v8);
    memcpy(v20, v6, sizeof(v20));
    *(_WORD *)&v20[283] = v30;
    v16 = *(void (__fastcall **)(int, __int64 *))(a1 + 32);
    v20[285] = v31;
    v16(a1, &v18);
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}
