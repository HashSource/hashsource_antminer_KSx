int __fastcall sub_B11B8(int a1, __int64 *a2)
{
  size_t *v2; // r6
  __int64 v3; // r2
  int *v5; // r5
  const char *v7; // r1
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r1
  int v13; // r2
  int v14; // r3
  _DWORD *v15; // r12
  void (__fastcall *v16)(int, __int64 *); // r4
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r1
  __int64 v22; // [sp+0h] [bp-D8h] BYREF
  char dest[64]; // [sp+8h] [bp-D0h] BYREF
  _BYTE v24[80]; // [sp+48h] [bp-90h] BYREF
  int v25; // [sp+98h] [bp-40h]
  int v26; // [sp+9Ch] [bp-3Ch]
  int v27; // [sp+A0h] [bp-38h]
  int v28; // [sp+A4h] [bp-34h]
  int v29; // [sp+A8h] [bp-30h]
  int v30; // [sp+ACh] [bp-2Ch]
  int v31; // [sp+B0h] [bp-28h]
  int v32; // [sp+B4h] [bp-24h]
  int v33; // [sp+B8h] [bp-20h]
  _BYTE v34[16]; // [sp+BCh] [bp-1Ch] BYREF
  size_t v35; // [sp+CCh] [bp-Ch]
  int v36; // [sp+D0h] [bp-8h]
  int v37; // [sp+D4h] [bp-4h]
  int vars0; // [sp+D8h] [bp+0h]
  int vars4; // [sp+DCh] [bp+4h]
  int vars8; // [sp+E0h] [bp+8h]
  int varsC; // [sp+E4h] [bp+Ch]

  v2 = (size_t *)*((_DWORD *)a2 + 283);
  if ( v2 )
  {
    v3 = *a2;
    v5 = (int *)(a2 + 129);
    v7 = (const char *)*((_DWORD *)a2 + 281);
    v22 = v3;
    strcpy(dest, v7);
    memcpy(v24, a2 + 1, sizeof(v24));
    v8 = target_to_diff_ltc(v5);
    v9 = v5[1];
    v10 = v5[2];
    v11 = v5[3];
    v25 = v8;
    v26 = *v5;
    v27 = v9;
    v28 = v10;
    v29 = v11;
    v12 = v5[5];
    v13 = v5[6];
    v14 = v5[7];
    v30 = v5[4];
    v31 = v12;
    v32 = v13;
    v33 = v14;
    memcpy(v34, v2 + 1, *v2);
    v15 = a2 + 136;
    v16 = *(void (__fastcall **)(int, __int64 *))(a1 + 32);
    v35 = *v2;
    v17 = v15[4];
    v18 = v15[5];
    v19 = v15[6];
    v36 = v15[3];
    v37 = v17;
    vars0 = v18;
    vars4 = v19;
    v20 = v15[8];
    vars8 = v15[7];
    varsC = v20;
    v16(a1, &v22);
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}
