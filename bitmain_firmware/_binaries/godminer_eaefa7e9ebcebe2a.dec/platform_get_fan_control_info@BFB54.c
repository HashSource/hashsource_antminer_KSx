float *__fastcall platform_get_fan_control_info(float *result)
{
  int v1; // r1
  int v2; // r2
  int v3; // r3
  int v4; // r1
  int v5; // r2
  int v6; // r3
  float v7; // r1
  float v8; // r2
  float v9; // r3
  float v10; // lr

  v1 = dword_3085A0;
  v2 = dword_3085A4;
  v3 = dword_3085A8;
  *(_DWORD *)result = dword_30859C;
  *((_DWORD *)result + 1) = v1;
  *((_DWORD *)result + 2) = v2;
  *((_DWORD *)result + 3) = v3;
  v4 = dword_3085B0;
  v5 = dword_3085B4;
  v6 = dword_3085B8;
  *((_DWORD *)result + 4) = dword_3085AC;
  *((_DWORD *)result + 5) = v4;
  *((_DWORD *)result + 6) = v5;
  *((_DWORD *)result + 7) = v6;
  v7 = flt_3085C0;
  v8 = flt_3085C4;
  v9 = flt_3085C8;
  v10 = flt_3085CC;
  *((_DWORD *)result + 8) = dword_3085BC;
  result[9] = v7;
  result[10] = v8;
  result[11] = v9;
  result[12] = v10;
  return result;
}
